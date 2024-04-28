/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:47:27 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/28 21:53:19 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(int argc, char **argv)
{
    (void)argc;
	(void)argv;
	std::cout << std::endl;
	
	try
	{
		Bureaucrat	kev("Kevin", 1);
		RobotomyRequestForm		R("Robbie");
		ShrubberyCreationForm	S("Shrubby");

		std::cout << kev << std::endl;
		kev.minusGrade();
		std::cout << kev << std::endl;
		std::cout << R << std::endl;
		std::cout << S << std::endl;
		kev.executeForm(R);
		kev.signAForm(R);
		kev.signAForm(S);
		kev.executeForm(R);
		kev.executeForm(S);
		std::cout << std::endl;

		Bureaucrat	stanly("Stanly", 150);
		Bureaucrat	joseph("Brodsky", 1);
		PresidentialPardonForm		P("The Pope");
		std::cout << stanly << std::endl;
		std::cout << P << std::endl;
		stanly.signAForm(P);
		joseph.signAForm(P);

		stanly.executeForm(P);
		joseph.executeForm(P);
	}
	catch (std::exception &e) {	
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	
	return (0);
}

