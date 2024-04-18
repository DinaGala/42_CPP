/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:23:07 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/18 20:03:36 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
//	_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat Default destructor called" << std::endl;
}

Cat::Cat(const Cat &other): Animal("Cat")
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = other;
}

Cat	&Cat::operator=(const Cat &other) 
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "  Meeeeeooooow!  " << std::endl;
}

