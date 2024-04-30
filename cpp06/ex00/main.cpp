/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 21:02:12 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/30 21:16:53 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"


int	main(int argc, char **argv)
{

	(void)argc;
	(void)argv;

	ScalarConverter::convert("test");
	std::cout << DBL_MIN <<  std::endl;
//	DBL_MAX/MIN FLT_MAX/MIN INT_MAX/MIN
	
	return (0);
}

