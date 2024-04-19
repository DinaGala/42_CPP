
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

