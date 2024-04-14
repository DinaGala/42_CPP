/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:53:09 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/14 18:37:42 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main( void ) 
{
	Point A(0, 0);
    Point B(4, 0);
    Point C(2, 4);
    Point P(2, 2);

    if (bsp(A, B, C, P)) 
	{
        std::cout << "Point P is inside triangle ABC." << std::endl;
    } else {
        std::cout << "Point P is outside triangle ABC." << std::endl;
    }
	return (0);
}