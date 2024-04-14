/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:27:11 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/14 17:43:44 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &other);
		Point	&operator=(const Point &other);
		~Point();

		const Fixed getX() const;
		const Fixed getY() const;

	private:
		const Fixed	_x;
		const Fixed	_y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif