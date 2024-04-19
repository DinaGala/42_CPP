/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:24:29 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/19 20:05:15 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	_dogBrain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Default destructor called" << std::endl;
	delete _dogBrain;
}

Dog::Dog(const Dog &other): AAnimal("Dog")
{
	std::cout << "Dog Copy constructor called" << std::endl;
	_dogBrain = new Brain();
	*this = other;
}

Dog	&Dog::operator=(const Dog &other) 
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_type = other._type;
	*_dogBrain = *(other._dogBrain);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "  Gav! Gav! Gav!  " << std::endl;
}

Brain	*Dog::getBrain()	const
{
	return (_dogBrain);
}

