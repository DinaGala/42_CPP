/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:19:34 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/26 20:41:32 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Unknown"), _signGrade(MIN_GRADE), _execGrade(MIN_GRADE), _ifSigned(false)
{
//	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string const &name, int signGrade, int execGrade):  _name(name), _signGrade(signGrade), _execGrade(execGrade), _ifSigned(false)
{
//	std::cout << "Form Name constructor called" << std::endl;
	if (signGrade > MIN_GRADE || execGrade > MIN_GRADE)
		throw GradeTooLowException();
	else if (signGrade < MAX_GRADE || execGrade < MAX_GRADE)
		throw GradeTooHighException();
}

Form::~Form()
{
//	std::cout << "Form Default destructor called" << std::endl;
}

Form::Form(const Form &other): _name(other.getName()), _signGrade(other.getSignGrade()), _execGrade(other.getExecGrade()), _ifSigned(other.getIfSigned())
{
//	std::cout << "Form Copy constructor called" << std::endl;
	if (_signGrade > MIN_GRADE || _execGrade > MIN_GRADE)
		throw GradeTooLowException();
	else if (_signGrade < MAX_GRADE || _execGrade < MAX_GRADE)
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

int	Form::getSignGrade() const
{
	return (_signGrade);
}

int	Form::getExecGrade() const
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
		throw GradeTooLowException();
	else if (_ifSigned == true)
		throw AlreadySignedException();
	else
		_ifSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("The grade is too high! The valid range is from 150 to 1.");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low! The valid range is from 150 to 1.");
}

const char *Form::AlreadySignedException::what() const throw()
{
	return ("The form is already signed.");
}

std::ostream	&operator<<(std::ostream &out, const Form &form)
{
	/*std::string sign;
	if (form.getIfSigned() == true)
		sign = " is already signed";
	else
		sign = " is not signed yet";*/
	return (out << "The Form " << form.getName() << " needs a grade " 
	<< form.getSignGrade() << " to be signed, a grade " << form.getExecGrade() 
	<< " to be executed and it is " << (form.getIfSigned() ? "already signed." : "not signed yet."));
}