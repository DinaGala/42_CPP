/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:47:27 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/28 22:49:59 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(int argc, char **argv)
{
    (void)argc;
	(void)argv;
	std::cout << std::endl;
	
	try
	{
		Bureaucrat	kev("Kevin", 1);
		Intern		billy;
		AForm *R = billy.makeForm("robotomy request", "Robbie");
		AForm *S = billy.makeForm("shruberry creation", "Shrubby");

		std::cout << kev << std::endl;
		kev.minusGrade();
		std::cout << kev << std::endl;
		std::cout << *R << std::endl;
		std::cout << *S << std::endl;
		kev.executeForm(*R);
		kev.signAForm(*R);
		kev.signAForm(*S);
		kev.executeForm(*R);
		kev.executeForm(*S);

		delete R;
		delete S;
		std::cout << std::endl;

		Bureaucrat	stanly("Stanly", 150);
		Bureaucrat	joseph("Brodsky", 1);
		AForm *P = billy.makeForm("presidential pardon", "The Pope");
		std::cout << stanly << std::endl;
		std::cout << *P << std::endl;
		stanly.signAForm(*P);
		joseph.signAForm(*P);

		stanly.executeForm(*P);
		joseph.executeForm(*P);

		delete P;

		AForm *X = billy.makeForm("unexistant form", "The Pope");
		std::cout << X << std::endl;

	}
	catch (std::exception &e) {	
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	
	return (0);
}

