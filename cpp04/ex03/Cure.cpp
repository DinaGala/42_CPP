

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Default destructor called" << std::endl;
}

Cure::Cure(const Cure &other)
{
	std::cout << "Cure Copy constructor called" << std::endl;
	*this = other;
}

Cure	&Cure::operator=(const Cure &other) 
{
	std::cout << "Cure Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

