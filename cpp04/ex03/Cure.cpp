/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:10:37 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 19:25:09 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
//	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::~Cure()
{
//	std::cout << "Cure Default destructor called" << std::endl;
}

Cure::Cure(const Cure &other)
{
//	std::cout << "Cure Copy constructor called" << std::endl;
	*this = other;
}

Cure	&Cure::operator=(const Cure &other) 
{
//	std::cout << "Cure Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	std::cout << "Cloning a new Cure Materia" << std::endl;
	AMateria	*newCure = new Cure(*this);
//	*newCure = *this;
	return (newCure);
}

