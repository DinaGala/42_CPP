/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:47:27 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/30 16:36:10 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(int argc, char **argv)
{
    (void)argc;
	(void)argv;
	std::cout << std::endl;
	
	try
	{
		Bureaucrat	kev("Kevin", 1);
		Form		A("A", 30, 35);
		Form		B("B", 1, 1);

		std::cout << kev << std::endl;
		kev.minusGrade();
		std::cout << kev << std::endl;
		std::cout << A << std::endl;
		std::cout << B << std::endl;
		kev.signForm(A);
		kev.signForm(B);
		kev.signForm(A);
		std::cout << A << std::endl;
		std::cout << std::endl;

		Bureaucrat	stanly("Stanly", 150);
		Form	C("C", 148, 150);
		std::cout << stanly << std::endl;
		std::cout << C << std::endl;
		stanly.signForm(C);

		stanly.plusGrade();
		stanly.plusGrade();
		stanly.plusGrade();
		std::cout << stanly << std::endl;

		stanly.signForm(C);
		stanly.signForm(C);
	}
	catch (std::exception &e) {	
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	
	try
	{
		Bureaucrat	paul("Paul", 150);
		std::cout << paul << std::endl;
		paul.plusGrade();
		std::cout << paul << std::endl;
		paul.minusGrade();
		std::cout << paul << std::endl;
		paul.minusGrade();
	}
	catch (std::exception &e) {	
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	don("Donald", 250);
	}
	catch (std::exception &e) {	
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	try
	{
		Form	bad("Bad", -250, -151);
	}
	catch (std::exception &e) {	
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	return (0);
}

