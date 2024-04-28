/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 22:16:55 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/28 22:40:58 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
//	std::cout << "Intern Default constructor called" << std::endl;
}


Intern::~Intern()
{
//	std::cout << "Intern Default destructor called" << std::endl;
}

Intern::Intern(const Intern &other)
{
//	std::cout << "Intern Copy constructor called" << std::endl;
	*this = other;
}

Intern	&Intern::operator=(const Intern &other)
{
//	std::cout << "Intern Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	return (*this);
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	AForm*	(Intern::*func[3])(std::string) = {&Intern::makeShruberry, &Intern::makeRobotomy, &Intern::makePardon};
	std::string	forms[3] = {"shruberry creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
			return ((this->*func[i])(target));
	}
	std::cout << "Intern couldn't create a Form " << name + "." << std::endl;
	throw NoFormException();
}

AForm* Intern::makeShruberry(std::string target)
{
	std::cout << "Intern creates a ShrubberyCreationForm for " << target << std::endl;
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeRobotomy(std::string target)
{
	std::cout << "Intern creates a RobotomyRequestForm for " << target << std::endl;
	return (new RobotomyRequestForm(target));
}

AForm* Intern::makePardon(std::string target)
{
	std::cout << "Intern creates a PresidentialPardonForm for " << target << std::endl;
	return (new PresidentialPardonForm(target));
}

const char *Intern::NoFormException::what() const throw()
{
	return ("There is no such form.");
}