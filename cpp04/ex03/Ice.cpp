/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:21:44 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 18:18:19 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Default destructor called" << std::endl;
}

Ice::Ice(const Ice &other)
{
	std::cout << "Ice Copy constructor called" << std::endl;
	*this = other;
}

Ice	&Ice::operator=(const Ice &other) 
{
	std::cout << "Ice Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
	std::cout << "Cloning a new Ice Materia" << std::endl;
	AMateria	*newIce = new Ice(*this);
//	*newIce = *this;
	return (newIce);
}


