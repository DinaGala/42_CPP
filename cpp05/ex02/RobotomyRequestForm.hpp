
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include <iostream>


class RobotomyRequestForm
{
	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		// RobotomyRequestForm(std::string const &type);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &other);

	private:
    
};

#endif
