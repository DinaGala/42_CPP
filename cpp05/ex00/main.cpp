

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
	}
	catch (const Bureaucrat::GradeTooLowException &e) {	
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException &e) {	
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	paul("Paul", 150);
		std::cout << paul << std::endl;
		paul.plusGrade();
		std::cout << paul << std::endl;
		paul.minusGrade();
		paul.minusGrade();
	}
	catch (const Bureaucrat::GradeTooLowException &e) {	
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException &e) {	
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	don("Donald", 250);
	}
	catch (const Bureaucrat::GradeTooLowException &e) {	
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException &e) {	
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	return (0);
}

