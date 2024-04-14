/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:33:02 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/14 17:22:24 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0) 
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() 
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value): _value(value << _frac) 
{
//	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value): _value(roundf(value * (1 << _frac)))
{
//	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) 
{
//	std::cout << "Copy constructor called" << std::endl;
	_value = other.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &other) 
{
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_value = other.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits( int const raw )
{
//	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

int		Fixed::toInt( void ) const
{
	int	fin = _value >> _frac;
	return (fin);
}

float	Fixed::toFloat( void ) const
{
	float	fl = _value / (float) (1 << _frac);
	return (fl);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &val)
{
	out << val.toFloat();
	return (out);
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed	res(toFloat() + other.toFloat());
	return (res);
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed	res(toFloat() - other.toFloat());
	return (res);
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	Fixed	res(toFloat() / other.toFloat());
	return (res);
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed	res(toFloat() * other.toFloat());
	return (res);
}

Fixed	Fixed::operator++()
{
	++_value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	++_value;
	return (temp);
}

Fixed	Fixed::operator--()
{
	--_value;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	--_value;
	return (temp);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (_value > other.getRawBits());
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (_value < other.getRawBits());
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (_value >= other.getRawBits());
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (_value <= other.getRawBits());
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (_value == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (_value != other.getRawBits());
}

Fixed	&Fixed::min( Fixed &nb1, Fixed &nb2)
{
	return (nb1.toFloat() <= nb2.toFloat() ? nb1 : nb2);
}

const Fixed	&Fixed::min(const Fixed &nb1, const Fixed &nb2)
{
	return (nb1.toFloat() <= nb2.toFloat() ? nb1 : nb2);
}

Fixed	&Fixed::max( Fixed &nb1, Fixed &nb2)
{
	return (nb1.toFloat() >= nb2.toFloat() ? nb1 : nb2);
}

const Fixed	&Fixed::max(const Fixed &nb1, const Fixed &nb2)
{
	return (nb1.toFloat() >= nb2.toFloat() ? nb1 : nb2);
}