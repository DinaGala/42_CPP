/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:34:57 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/14 18:39:13 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(): _x(0), _y(0) {}

Point::~Point() {}

Point::Point(const float x, const float y): _x(x), _y(y) {}

Point::Point(const Point &other): _x(other.getX()), _y(other.getY()) {}

Point	&Point::operator=(const Point &other) 
{
	if (this != &other)
		std::cout << "Copy assignment operator called and failed: cannot assign a const value." << std::endl;
	return (*this);
}

const Fixed Point::getX() const
{
	return(_x);
}

const Fixed Point::getY() const
{
	return(_y);
}