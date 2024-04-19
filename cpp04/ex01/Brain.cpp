

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
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
	// ASSIGNMENT HERE
	return (*this);
}

