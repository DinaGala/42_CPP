/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:23:07 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/18 20:03:36 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default constructor called" << std::endl;
//	_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Default destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = other;
}

WrongCat	&WrongCat::operator=(const WrongCat &other) 
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "  Wrong  Meeeeeooooow!  " << std::endl;
}

