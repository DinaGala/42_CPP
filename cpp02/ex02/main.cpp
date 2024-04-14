/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:53:09 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/14 17:09:12 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "1. " << a << std::endl; 
	std::cout << "2. " << ++a << std::endl; 
	std::cout << "3. " << a << std::endl;
	std::cout << "4. " << a++ << std::endl;
	std::cout << "5. " << a << std::endl;
	std::cout << "6. " << a-- << std::endl;
	std::cout << "7. " << a << std::endl;
	std::cout << "8. " << --a << std::endl;

	std::cout << "9. " << b << std::endl;
	std::cout << "10. " << Fixed::max( a, b ) << std::endl;
	std::cout << "11. " << Fixed::min( a, b ) << std::endl;

	std::cout << "12. " << (b == a) << std::endl;
	return 0;
}