

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

//Bureaucrat::Bureaucrat(std::string const &type): _type(type)
//{
//	std::cout << "Bureaucrat Name constructor called" << std::endl;
//}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
	*this = other;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other) 
{
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	// ASSIGNMENT HERE
	return (*this);
}

