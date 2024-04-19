

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << _type << "AMateria Name constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Default destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = other;
}

AMateria	&AMateria::operator=(const AMateria &other) 
{
	std::cout << "AMateria Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	// ASSIGNMENT HERE
	return (*this);
}

