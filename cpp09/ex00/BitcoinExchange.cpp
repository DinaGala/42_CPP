/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 20:09:26 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/20 23:07:55 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &other) 
{
	if (this == &other)
		return (*this);
	return (*this);
}
//________________________________________________________________________//

std::string	trimStr(std::string& str)
{
	size_t start = str.find_first_not_of(" \t\r");
    if (start != std::string::npos)
        str = str.substr(start);
	
	start = str.find_last_not_of(" \t\r\n");
    if (start != std::string::npos) 
       str = str.substr(0, start + 1);
	return (str);
}


void	BitcoinExchange::_checkYmd(int year, int mth, int day)
{
	int	inmth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (year < 1900 || year > 2024)
		throw std::out_of_range("Invalid date: Year out of range");
	if (mth < 1 || mth > 12)
		throw std::out_of_range("Invalid date: Month out of range");
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
		inmth[1] = 29;	
	if (day < 1 || day > inmth[mth])
		throw std::out_of_range("Invalid date: Day out of range");
}


// trims the spaces and checks if the date is correct. If not throws an exception
std::string	BitcoinExchange::_checkDate(std::string& str) 
{
	str = trimStr(str);	
	for (int i = 0; str[i]; i++)
	{
		if ((i == 4 || i == 7) && str[i] == '-')
			continue ;
		else if (!std::isdigit(str[i]))
			throw std::out_of_range("Invalid date");
	}
	_checkYmd(std::atoi(str.substr(0, 4).c_str()), std::atoi(str.substr(5, 2).c_str()), std::atoi(str.substr(8, 2).c_str()));
	return (str);
}

double BitcoinExchange::_sToF(const std::string& str)
{
	std::stringstream	ss(str);
	long double				res;

	if (str.empty())
		throw std::out_of_range("bad input");
	ss >> res;
	if (ss.fail() || res == std::numeric_limits<long double>::infinity() || \
	res == -std::numeric_limits<long double>::infinity() || std::isnan(res) || res > DBL_MAX)
		throw std::out_of_range("too large number");
	return (res);
}

t_dt	BitcoinExchange::_saveDate(const std::string &str)
{
	t_dt	dt;

	dt.year = std::atoi(str.substr(0, 4).c_str());
	dt.mth = std::atoi(str.substr(5, 2).c_str());
	dt.day = std::atoi(str.substr(8, 2).c_str());
	dt.total = (dt.mth - 1) * 31 + dt.day;
	return (dt);
}

double	BitcoinExchange::_getVal(const std::string &date) 
{
	t_dt	myDate = _saveDate(date);

	std::map<t_dt, double>::reverse_iterator	it = _data.rbegin();
	while (it != _data.rend())
	{
		t_dt baseDate = (*it).first;
		if (baseDate.year < myDate.year)
			return ((*it).second);
		if ((baseDate.year == myDate.year) && (baseDate.total <= myDate.total))
			return ((*it).second);
		it++;
	}
	throw std::out_of_range("No records");
}

void	BitcoinExchange::_readLine(std::string &line) 
{
	std::string	str = line;
	str = trimStr(str);

	std::string	date = str.substr(0, 10);
	try {
		_checkDate(date);
	}
	catch(const std::exception& e) {
		throw std::out_of_range("Error: bad input => " + line);
	}

	str = trimStr(str);
	if (str.empty() || str[0] != '|')
		throw std::out_of_range("Error: bad input => " + line);
	str.erase(0, 1);
	str = trimStr(str);
	if (str.empty())
		throw std::out_of_range("Error: bad input => " + line);

	int	dot = 0;
	for (int i = 0; str[i]; i++)
	{
		if (i > 0 && !dot && str[i] == '.')
			dot++;
		else if (!std::isdigit(str[i]))
			throw std::out_of_range("Error: bad input => " + line);
	}

	double	rate = _sToF(str);
	if (rate < 0)
		throw std::out_of_range("Error: not a positive number");
	if (rate > 1000)
		throw std::out_of_range("Error: too large a number");

	double	val = _getVal(date);
	std::cout << date << " => " << str + " " << rate * val << std::endl;
}


void	BitcoinExchange::_firstLine(const std::string &line)
{
	std::string	str = line;
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	str = trimStr(str);
	if (str == "date | value")
		return ;
	_readLine(str);
}

void	BitcoinExchange::_saveCSV()
{
	std::string		date;
	std::string		rate;
	std::ifstream	base("data.csv");

	if (!base.is_open())
		throw std::runtime_error("Error opening exchange rates base.");
	if (!std::getline(base, date)) //skipping the first line with the header
		throw std::invalid_argument("Data base is empty.");
	while (std::getline(base, date, ',') && std::getline(base, rate))
	{
		date = _checkDate(date);
		_data.insert(std::make_pair(_saveDate(date), _sToF(rate)));
	}
	base.close();
}

void	BitcoinExchange::btc(std::string file)
{
	_saveCSV();

	std::ifstream	input(file);
	std::string		line;

	if (!input.is_open())
		throw std::runtime_error("Error opening input file.");
	if (!std::getline(input, line))
		throw std::invalid_argument("Input file is empty.");
	_firstLine(line);
	while (std::getline(input, line))
	{
		try
		{
			_readLine(line);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
