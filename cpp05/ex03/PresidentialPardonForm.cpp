/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 21:42:06 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/28 21:57:55 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _target("Unknown target")
{
//	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
//	std::cout << "PresidentialPardonForm Name constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
//	std::cout << "PresidentialPardonForm Default destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other), _target(other._target)
{
//	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
//	std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	AForm::operator=(other);
	_target = other._target;
	return (*this);
}

void	PresidentialPardonForm::beExecuted() const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (_target);
}

std::ostream	&operator<<(std::ostream &out, const PresidentialPardonForm &form)
{
	return (out <<  form.getTarget() + " " << form.getName() << " needs a grade " 
	<< form.getSignGrade() << " to be signed, a grade " << form.getExecGrade() 
	<< " to be executed and it is " << (form.getIfSigned() ? "already signed." : "not signed yet."));
}