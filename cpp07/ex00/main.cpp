/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:43:38 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/03 19:49:58 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int	a = 0;
	int	b = 9;
	std::cout << "a: " << a << ", b: " << b << std::endl;	
	swap(a, b);
	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "min is: " << min(a, b) << std::endl;
	std::cout << "max is: " << max(a, b) << std::endl;

	double	x = 0.05;
	double	y = 2.7;
	std::cout << "x: " << x << ", y: " << y << std::endl;	
	swap(x, y);
	std::cout << "x: " << x << ", y: " << y << std::endl;
	std::cout << "min is: " << min(x, y) << std::endl;
	std::cout << "max is: " << max(x, y) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return (0);
}

