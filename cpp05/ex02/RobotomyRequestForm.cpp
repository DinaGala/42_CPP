/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:48:32 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/28 21:58:33 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("Unknown target")
{
//	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
//	std::cout << "RobotomyRequestForm Name constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
//	std::cout << "RobotomyRequestForm Default destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm(other), _target(other._target)
{
//	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other) 
{
//	std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	AForm::operator=(other);
	_target = other._target;
	return (*this);
}

void	RobotomyRequestForm::beExecuted() const
{
	std::srand(std::time(NULL));

	std::cout << "DRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR..." << std::endl;
	std::cout << _target << (std::rand() % 2 == 0 ? " has been succesfully robotomized!" : "'s robotomy failed. Try again later.") << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (_target);
}

std::ostream	&operator<<(std::ostream &out, const RobotomyRequestForm &form)
{
	return (out <<  form.getTarget() + " " << form.getName() << " needs a grade " 
	<< form.getSignGrade() << " to be signed, a grade " << form.getExecGrade() 
	<< " to be executed and it is " << (form.getIfSigned() ? "already signed." : "not signed yet."));
}