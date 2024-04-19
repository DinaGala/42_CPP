/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:18:51 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/18 19:42:25 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal(): _type("Unnown WrongAAnimal")
{
	std::cout << "WrongAAnimal Default constructor called" << std::endl;
}

WrongAAnimal::WrongAAnimal(std::string const &type): _type(type)
{
	std::cout << "WrongAAnimal Name constructor called" << std::endl;
}

WrongAAnimal::~WrongAAnimal()
{
	std::cout << "WrongAAnimal Default destructor called" << std::endl;
}

WrongAAnimal::WrongAAnimal(const WrongAAnimal &other)
{
	std::cout << "WrongAAnimal Copy constructor called" << std::endl;
	*this = other;
}

WrongAAnimal	&WrongAAnimal::operator=(const WrongAAnimal &other) 
{
	std::cout << "WrongAAnimal Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

void	WrongAAnimal::makeSound() const
{
	std::cout << "  * WRONG ANNOING SILENCE *  " << std::endl;
}

std::string		WrongAAnimal::getType() const
{
	return (_type);
}
