/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 21:02:12 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/02 22:28:58 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	ScalarConverter::convert("-inf");
	ScalarConverter::convert("+inf");
	ScalarConverter::convert("nan");
	ScalarConverter::convert("-inff");
	ScalarConverter::convert("+inff");
	ScalarConverter::convert("nanf");
	ScalarConverter::convert("-0");
	ScalarConverter::convert("-2.00009");
	ScalarConverter::convert("4456.500000");
	ScalarConverter::convert("234567");
	ScalarConverter::convert("64");
	ScalarConverter::convert("2147483649678.00000001");
	ScalarConverter::convert("'b'");
	ScalarConverter::convert("-9876534567898823456789876543456789876534567890987654345678909.0f");
	ScalarConverter::convert("4456.000000");
	ScalarConverter::convert("-8");
	ScalarConverter::convert("64a");

	return (0);
}

