/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:24:29 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 15:12:21 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	_dogBrain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Default destructor called" << std::endl;
	if (_dogBrain)
		delete _dogBrain;
}

Dog::Dog(const Dog &other): Animal("Dog")
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

Brain	*Dog::getBrain() const
{
	return (_dogBrain);
}

void	Dog::setBrainIdeas(std::string const idea)
{
	if (_dogBrain)
		_dogBrain->setIdeas(idea);
	else
		std::cout << "This dog doesn't have a brain" << std::endl;
}

void	Dog::printBrainIdea(int index) const
{
	if (_dogBrain)
		_dogBrain->printIdea(index);
	else
		std::cout << "This dog doesn't have a brain" << std::endl;
}

void	Dog::noBrain()
{
	if (_dogBrain)
		delete _dogBrain;
	_dogBrain = nullptr;
}

