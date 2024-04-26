/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:19:34 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/26 14:45:58 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Unknown"), _signGrade(150), _execGrade(150), _ifSigned(false)
{
//	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string const &name, int signGrade, int execGrade):  _name(name), _signGrade(signGrade), _execGrade(execGrade), _ifSigned(false)
{
//	std::cout << "Form Name constructor called" << std::endl;
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	else if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
}

Form::~Form()
{
//	std::cout << "Form Default destructor called" << std::endl;
}

Form::Form(const Form &other): _name(other.getName()), _signGrade(other.getSignGrade()), _execGrade(other.getExecGrade()), _ifSigned(other.getIfSigned())
{
//	std::cout << "Form Copy constructor called" << std::endl;
	if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
	else if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
}

Form	&Form::operator=(const Form &other) 
{
//	std::cout << "Form Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_ifSigned = other.getIfSigned();
	return (*this);
}

std::string const	Form::getName() const
{
	return (_name);
}

const int	Form::getSignGrade() const
{
	return (_signGrade);
}

const int	Form::getExecGrade() const
{
	return (_execGrade);
}

bool	Form::getIfSigned() const
{
	return (_ifSigned);
}

void	Form::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > _signGrade)
	{
		std::cout << bur.getName() << " couldn't sign " << _name << " because his grade is too low." << std::endl;
		throw GradeTooLowException();
	}
	else if (bur.getGrade() < 1)
		throw GradeTooHighException();
	else if (_ifSigned == true)
		std::cout << "Form " << _name << " is already signed" << std::endl;
	else
		_ifSigned = true;
}