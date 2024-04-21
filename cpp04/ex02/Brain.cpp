/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:16:57 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 15:17:18 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
	for (int i = 0; i < N; i++)
		_ideas[i] = "no idea";
}

Brain::~Brain()
{
	std::cout << "Brain Default destructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = other;
}

Brain	&Brain::operator=(const Brain &other) 
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	for (int i = 0; i < N; i++)
		_ideas[i] = other._ideas[i];
	return (*this);
}

void	Brain::setIdeas(std::string const idea)
{
	std::cout << "Brain Set Ideas called" << std::endl;
	for (int i = 0; i < N; i++)
		_ideas[i] = idea;
}

void	Brain::printIdea(int index) const
{
	if (index >= 0 && index < 100)
		std::cout << "The idea number " << index << " is: " << _ideas[index] << std::endl;
	else
		std::cout << "There is no such idea. choose an index between 0 and 99." << std::endl;

}
