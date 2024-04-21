/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:51:17 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 19:23:45 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type("Unknown")
{
//	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
//	std::cout << _type << " AMateria Name constructor called" << std::endl;
}

AMateria::~AMateria()
{
//	std::cout << "AMateria Default destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
//	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = other;
}

AMateria	&AMateria::operator=(const AMateria &other) 
{
//	std::cout << "AMateria Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_type = other._type; // no need but to be discussed
	return (*this);
}

std::string const &AMateria::getType() const
{
//	std::cout << "AMateria get Type called" << std::endl;
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Undefined Materia usage to " << target.getName() << std::endl;
}