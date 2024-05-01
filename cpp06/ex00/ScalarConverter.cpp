/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 21:25:29 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/01 20:11:19 by nzhuzhle         ###   ########.fr       */
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
	return (value.length() == 3 && value.at(0) == '\'' && value.at(2) == '\'');
}

bool	isInt(const std::string & value)
{
//	std::cout << value << std::endl;
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
//	std::cout << value << std::endl;
	int		i = 0;
	bool	pt = false;
	if (value == "-inff" || value == "+inff" || value == "nanf")
		return (true);
	if (value[value.length() - 1] != 'f' || value.length() < 4)
		return (false);
	if (value[0] == '-' && value[1] && std::isdigit(value[1]))
		i++;
	while (value[i])
	 && std::isdigit(value[i]))
		i++;
	if (i < (int)value.length())
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
		std::cout << value << std::endl;
	return (true);
}

const char	*Input::what() const throw()
{
	return ("Invalid input");
}

input	defType(const std::string & value)
{
	bool	(*funcs[4])(const std::string &) = {&isChar, &isInt, &isFloat, &isDbl};

	if (value.empty() || std::isspace(value.at(0)))
		throw Input();
	for (int i = 0; i < 4; i++)
	{
		if (funcs[i](value))
			return (input(i));
	}
	throw Input();
}

void	ScalarConverter::convert( const std::string & value )
{
	input	type;
	try
	{
		type = defType(value);

	}
	catch(const std::exception& e)
	{
		std::cerr << "Caught an exception: " << e.what() << '\n';
		return ;
	}
//	std::cout << value << std::endl;
	std::cout << type << std::endl;
}
