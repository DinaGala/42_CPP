/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:18:51 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/19 19:50:37 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("Unnown AAnimal")
{
	std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string const &type): _type(type)
{
	std::cout << "AAnimal Name constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Default destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = other;
}

AAnimal	&AAnimal::operator=(const AAnimal &other) 
{
	std::cout << "AAnimal Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

std::string		AAnimal::getType() const
{
	return (_type);
}

void		AAnimal::setType(std::string type)
{
	_type = _type + " " + type;
}
