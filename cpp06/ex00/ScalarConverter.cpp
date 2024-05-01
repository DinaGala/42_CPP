/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 21:25:29 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/01 23:32:40 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	*this = other;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &other) 
{
	(void)other;
	return (*this);
}

bool	isChar(const std::string & value)
{
//	std::cout << value << std::endl;
	if (value.length() == 3 && value.at(0) == '\'' && value.at(2) == '\'' && value[1] > 31 && value[1] < 127)
		return true;
	return (false);
}

bool	isInt(const std::string & value)
{
//	std::cout << value << std::endl;
//	return false;
	int	i = 0;
	if (value[1] && value[0] == '0')
		return (false);
	if (value[0] == '-' && value[1] && value[1] != '0')
		i++;
	while (value[i] && std::isdigit(value[i]))
		i++;
	if (i < (int)value.length())
		return (false);
	try  {
		std::stoi(value);
	}
	catch (const std::exception &e) {
		return (false);
	}
	return (true);
}

bool	isFloat(const std::string & value)
{
//	std::cout << "isfloat" << std::endl;
	int		i = 0;
	bool	pt = false;
	if (value == "-inff" || value == "+inff" || value == "nanf")
		return (true);
	if (value[0] == '-' && value[1] && std::isdigit(value[1]))
		i++;
	while (value[i])
	{
		if 	(!pt && value[i] == '.' && i > 0)
			pt = true;
		else if (!std::isdigit(value[i]))
			break ;
		i++;
	}
	if (i < (int)value.length() - 1 || !pt || value[value.length() - 1] != 'f' || value.length() < 4)
		return (false);
	try  {
		std::stof(value);
	}
	catch (const std::exception &e) {
		return (false);
	}
	return (true);
}

bool	isDbl(const std::string & value)
{
//		std::cout << "is double" << std::endl;
	int		i = 0;
	bool	pt = false;
	if (value == "-inf" || value == "+inf" || value == "nan")
		return (true);
	if (value[0] == '-' && value[1] && std::isdigit(value[1]))
		i++;
	while (value[i])
	{
		if 	(!pt && value[i] == '.' && i > 0)
			pt = true;
		else if (!std::isdigit(value[i]))
			return (false);
		i++;
	}
	if (!pt || value.length() < 3)
		return (false);
	try  {
		std::stod(value);
	}
	catch (const std::exception &e) {
		return (false);
	}
	return (true);
}

const char	*Input::what() const throw()
{
	return ("Invalid input");
}

input	defType(const std::string & value)
{
	bool	(*funcs[4])(const std::string &) = {&isChar, &isInt, &isFloat, &isDbl};

	if (value.empty())
		throw Input();
	for (int i = 0; i < 4; i++)
	{
		if (funcs[i](value))
			return (input(i));
	}
	throw Input();
}


void 	toChar(const std::string &value, input type)
{
//	std::cout << value + " " << type << std::endl;
//	long	nb;
	
	std::cout << "Char: ";
	if (type == CHAR)
		std::cout << value << std::endl;
	else
	{
		try 
		{
			if (std::round(std::stof(value)) > 31 && std::round(std::stof(value)) < 127)
				std::cout << "'" << static_cast<char>(std::round(std::stof(value))) << "'" << std::endl;
			else if (std::round(std::stof(value)) >= CHAR_MIN && std::round(std::stof(value)) <= UCHAR_MAX)
				std::cout << "Non displayable" << std::endl;
			else
				throw Input(); 
		}
		catch (const std::exception &e)
		{
			std::cout << "Impossible" << std::endl;
		}
	}
//	std::cout << "'" << static_cast<int>(CHAR_MIN) << "'" << std::endl;
//	std::cout << std::fixed;
	// if (LONG_MAX > FLT_MAX)
	// 	std::cout << "INT" << std::endl;
	// else
	// 	std::cout << "FLOAT" << std::endl;
}

void 	toInt(const std::string &value, input type)
{
//	std::cout << value + " " << type << std::endl;
//	long	nb;
	
	std::cout << "Int: ";
	if (type == CHAR)
		std::cout << static_cast<int>(value.at(1)) << std::endl;
	else if ((type == INT || type == FLT || type == DBL) && std::round(std::stod(value)) <= INT_MAX && std::round(std::stod(value)) >= INT_MIN)
			std::cout << static_cast<int>(std::round(std::stod(value))) << std::endl;
	else
		std::cout << "Impossible: overflow" << std::endl;
	 
	// else
	// {
	// 	try 
	// 	{
	// 		nb = std::stoi(value);
	// 		if (nb > 31 && nb < 127)
	// 			std::cout << "'" << static_cast<char>(nb) << "'" << std::endl;
	// 		else if (nb >= CHAR_MIN && nb <= UCHAR_MAX)
	// 			std::cout << "Non dispayable" << std::endl;
	// 		else
	// 			throw Input(); 
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cout << "Impossible" << std::endl;
	// 	}
	// }
//	std::cout << "'" << static_cast<int>(CHAR_MIN) << "'" << std::endl;
}

void 	toFloat(const std::string &value, input type)
{
//	std::cout << value + " " << type << std::endl;
//	long	nb;
	
	std::cout << "Float: ";
	try
	{
		if (type == CHAR)
			std::cout << static_cast<int>(value.at(1)) << ".0f" << std::endl;
		else if (type == INT)
			std::cout << std::stof(value) << ".0f" << std::endl;
		else if (type == DBL)
			std::cout << std::stof(value) << ".0f" << std::endl; 
		else
			std::cout << value << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Impossible: overflow" << '\n';
	}
}

void 	toDbl(const std::string &value, input type)
{
//	std::cout << value + " " << type << std::endl;
//	long	nb;
	std::string val = value;
	val.pop_back();

	std::cout << "Double: ";
	try
	{
		if (type == CHAR)
			std::cout << static_cast<int>(value.at(1)) << ".0" << std::endl;
		else if (type == INT)
			std::cout << std::stod(value) << ".0" << std::endl;
		else if (type == FLT)
			std::cout << val << std::endl;
		else
			std::cout << value << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Impossible" << '\n';
	}
}

void	ScalarConverter::convert( const std::string & value )
{
	input	type;
	try
	{
		type = defType(value);
		std::cout << type << std::endl;
		toChar(value, type);
		toInt(value, type);
		toFloat(value, type);
		toDbl(value, type);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Caught an exception: " << e.what() << '\n';
//		return ;
	}
//	std::cout << value << std::endl;

}
