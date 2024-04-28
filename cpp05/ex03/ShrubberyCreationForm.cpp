/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 21:13:52 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/28 21:58:13 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), _target("Unknown target")
{
//	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
//	std::cout << "ShrubberyCreationForm Name constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
//	std::cout << "ShrubberyCreationForm Default destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): AForm(other), _target(other._target)
{
//	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) 
{
//	std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	AForm::operator=(other);
	_target = other._target;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

void	ShrubberyCreationForm::beExecuted() const
{
	std::ofstream	outfile(_target + "_shrubbery", std::ios_base::out);
	if (!outfile.is_open())
		std::cerr << "Error: outfile crush" << std::endl;
	else
	{
		outfile << "          &&& &&  & &&\n"
             "      && &\\/&&\\|& ()|/ @, &&\n"
             "      &\\/(/&/&||/& /_/)_&/_&\n"
             "   &() &\\/&|()|/&\\/ '%' & ()\n"
             "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
             "&&   && & &| &| /& & % ()& /&&\n"
             " ()&_---()&\\&\\|&&-&&--%---()~\n"
             "     &&     \\|||\n"
             "             |||\n"
             "             |||\n"
             "             |||\n"
             "       , -=-~  .-^- _\"" << std::endl;
		outfile.close();
	}
}

std::ostream	&operator<<(std::ostream &out, const ShrubberyCreationForm &form)
{
	return (out <<  form.getTarget() + " " << form.getName() << " needs a grade " 
	<< form.getSignGrade() << " to be signed, a grade " << form.getExecGrade() 
	<< " to be executed and it is " << (form.getIfSigned() ? "already signed." : "not signed yet."));
}