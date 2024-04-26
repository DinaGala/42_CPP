/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:19:34 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/26 20:48:47 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("Unknown"), _signGrade(MIN_GRADE), _execGrade(MIN_GRADE), _ifSigned(false)
{
//	std::cout << "AForm Default constructor called" << std::endl;
}

AForm::AForm(std::string const &name, int signGrade, int execGrade):  _name(name), _signGrade(signGrade), _execGrade(execGrade), _ifSigned(false)
{
//	std::cout << "AForm Name constructor called" << std::endl;
	if (signGrade > MIN_GRADE || execGrade > MIN_GRADE)
		throw GradeTooLowException();
	else if (signGrade < MAX_GRADE || execGrade < MAX_GRADE)
		throw GradeTooHighException();
}

AForm::~AForm()
{
//	std::cout << "AForm Default destructor called" << std::endl;
}

AForm::AForm(const AForm &other): _name(other.getName()), _signGrade(other.getSignGrade()), _execGrade(other.getExecGrade()), _ifSigned(other.getIfSigned())
{
//	std::cout << "AForm Copy constructor called" << std::endl;
	if (_signGrade > MIN_GRADE || _execGrade > MIN_GRADE)
		throw GradeTooLowException();
	else if (_signGrade < MAX_GRADE || _execGrade < MAX_GRADE)
		throw GradeTooHighException();
}

AForm	&AForm::operator=(const AForm &other) 
{
//	std::cout << "AForm Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_ifSigned = other.getIfSigned();
	return (*this);
}

std::string const	AForm::getName() const
{
	return (_name);
}

int	AForm::getSignGrade() const
{
	return (_signGrade);
}

int	AForm::getExecGrade() const
{
	return (_execGrade);
}

bool	AForm::getIfSigned() const
{
	return (_ifSigned);
}

void	AForm::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > _signGrade)
		throw GradeTooLowException();
	else if (_ifSigned == true)
		throw AlreadySignedException();
	else
		_ifSigned = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("The grade is too high! The valid range is from 150 to 1.");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("The grade is too low! The valid range is from 150 to 1.");
}

const char *AForm::AlreadySignedException::what() const throw()
{
	return ("The form is already signed.");
}

std::ostream	&operator<<(std::ostream &out, const AForm &form)
{
	return (out << "The AForm " << form.getName() << " needs a grade " 
	<< form.getSignGrade() << " to be signed, a grade " << form.getExecGrade() 
	<< " to be executed and it is " << (form.getIfSigned() ? "already signed." : "not signed yet."));
}