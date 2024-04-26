

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Unknown"), _grade(MIN_GRADE)
{
//	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name)
{
//	std::cout << "Bureaucrat Name constructor called" << std::endl;
	if (grade > MIN_GRADE)
		throw GradeTooLowException();
	else if (grade < MAX_GRADE)
		throw GradeTooHighException();
	else
		_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
//	std::cout << "Bureaucrat Default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): _name(other.getName())
{
//	std::cout << "Bureaucrat Copy constructor called" << std::endl;
	*this = other;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other) 
{
//	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_grade = other.getGrade();
	return (*this);
}

std::string const	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high! The valid range is from 150 to 1.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low! The valid range is from 150 to 1.");
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bur)
{
	return (out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << ".");
}

void	Bureaucrat::plusGrade()
{
	if (_grade == MAX_GRADE)
		throw GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::minusGrade()
{
	if (_grade == MIN_GRADE)
		throw GradeTooLowException();
	else
		_grade++;
}

void	Bureaucrat::signAForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed a form " << form.getName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << _name << " couldn't sign a form " << form.getName() << " because " << e.what() << std::endl;
	}
	/*catch(const AForm::AlreadySigned & e)
	{
		std::cerr << _name << " couldn't sign a form " << form.getName() << " because " << e.what() << '\n';
	}*/

	
}