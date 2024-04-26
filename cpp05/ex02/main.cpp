/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:47:27 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/26 20:53:38 by nzhuzhle         ###   ########.fr       */
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
		AForm		A("A", 30, 35);
		AForm		B("B", 1, 1);

		std::cout << kev << std::endl;
		kev.minusGrade();
		std::cout << kev << std::endl;
		std::cout << A << std::endl;
		std::cout << B << std::endl;
		kev.signAForm(A);
		kev.signAForm(B);
		kev.signAForm(A);
		std::cout << std::endl;

		Bureaucrat	stanly("Stanly", 150);
		AForm	C("C", 148, 150);
		std::cout << stanly << std::endl;
		std::cout << B << std::endl;
		stanly.signAForm(C);

		stanly.plusGrade();
		stanly.plusGrade();
		stanly.plusGrade();
		std::cout << stanly << std::endl;

		stanly.signAForm(C);
		stanly.signAForm(C);
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
		AForm	bad("Bad", -250, -151);
	}
	catch (std::exception &e) {	
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	return (0);
}

