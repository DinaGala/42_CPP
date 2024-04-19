/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:18:51 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/19 19:50:37 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Unnown Animal")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string const &type): _type(type)
{
	std::cout << "Animal Name constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Default destructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = other;
}

Animal	&Animal::operator=(const Animal &other) 
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "  * ANNOING SILENCE *  " << std::endl;
}

std::string		Animal::getType() const
{
	return (_type);
}

void		Animal::setType(std::string type)
{
	_type = type;
}
