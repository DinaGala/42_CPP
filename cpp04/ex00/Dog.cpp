/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:24:29 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/19 19:14:07 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Default destructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal("Dog")
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = other;
}

Dog	&Dog::operator=(const Dog &other) 
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "  Grrrrrrrrrrrrrrr!  " << std::endl;
}

