/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:37:14 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/26 19:43:06 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int	main(int argc, char **argv)
{
    (void)argc;
	(void)argv;
	
	try
	{
		Bureaucrat	kev("Kevin", 1);
		std::cout << kev << std::endl;
		kev.minusGrade();
		std::cout << kev << std::endl;
		kev.plusGrade();
		kev.plusGrade();
		std::cout << "This is not gonna be displayed" << std::endl;
	}
	catch (std::exception &e) {	
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	/*catch (const Bureaucrat::GradeTooLowException &e) {	
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException &e) {	
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}*/
	
	try
	{
		Bureaucrat	paul("Paul", 150);
		std::cout << paul << std::endl;
		paul.plusGrade();
		std::cout << paul << std::endl;
		paul.minusGrade();
		paul.minusGrade();
		std::cout << paul << std::endl;
	}
	catch (std::exception &e) {	
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat	don("Donald", 250);
	}
	catch (std::exception &e) {	
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	return (0);
}

