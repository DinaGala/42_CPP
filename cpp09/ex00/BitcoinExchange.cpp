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
void	check_ymd(int year, int mth, int day)
{
	int	inmth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	std::time_t now = std::time(0);
	std::tm* localTime = std::localtime(&now);

	if (year < 1900 || year > 2024)
		throw std::out_of_range("Year out of range");
	if (mth < 1 || mth > 12)
		throw std::out_of_range("Invalid date");
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
		inmth[1] = 29;	
	if (day < 1 || day > inmth[mth])
		throw std::out_of_range("Invalid date");
	if (year == (localTime->tm_year + 1900) && mth == (localTime->tm_mon + 1) && day > localTime->tm_mday)
		throw std::out_of_range("Invalid date");
}

// trims the spaces and checks if the date is correct. If not throws an exception
std::string	checkDate(std::string& str) 
{
	size_t start = str.find_first_not_of(" \t\r");
    if (start != std::string::npos)
        str = str.substr(start);
	
	start = str.find_last_not_of(" \t\r\n");
    if (start != std::string::npos) 
       str = str.substr(0, start + 1);

	for (int i = 0; str[i]; i++)
	{
		if ((i == 4 || i == 7) && str[i] == '-')
			continue ;
		else if (!std::isdigit(str[i]))
			throw std::out_of_range("Invalid date");
	}
	check_ymd(std::atoi(str.substr(0, 4).c_str()), std::atoi(str.substr(5, 2).c_str()), std::atoi(str.substr(8, 2).c_str()));
}

double BitcoinExchange::_sToF(const std::string& str) 
{
	std::stringstream	ss(str);
	long double				res;

	ss >> res;
	if (ss.fail() || res == std::numeric_limits<long double>::infinity() || \
	res == -std::numeric_limits<long double>::infinity() || std::isnan(res) || res > DBL_MAX)
		throw std::out_of_range("Conversion to double failed.");
	return (res);
}

void	BitcoinExchange::_readLine() {}
//std::map<std::string, double>	BitcoinExchange::_getLine() {}
double	BitcoinExchange::_getVal(const std::string &date) const {}

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
		date = checkDate(date);
		_data.insert(std::pair(date, _sToF(rate)));
	}
	base.close();
}

void	BitcoinExchange::btc(std::string file)
{
	_saveCSV();

}
