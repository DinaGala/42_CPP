/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 21:25:29 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/30 21:31:46 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
//	std::cout << "ScalarConverter Default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
//	std::cout << "ScalarConverter Default destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
//	std::cout << "ScalarConverter Copy constructor called" << std::endl;
	*this = other;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &other) 
{
//	std::cout << "ScalarConverter Copy assignment operator called" << std::endl;
	(void)other;
	return (*this);
}

void	ScalarConverter::convert( const std::string & value )
{
	std::cout << value << std::endl;
}

