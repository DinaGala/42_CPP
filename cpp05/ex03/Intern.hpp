/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 22:03:57 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/28 22:41:01 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &other);
		Intern& operator=(const Intern &other);

		AForm* makeForm(std::string name, std::string target);
		AForm* makeRobotomy(std::string target);
		AForm* makeShruberry(std::string target);
		AForm* makePardon(std::string target);

		class NoFormException: public std::exception
		{
			public:
				const char *what() const throw();
		};

    
};

#endif
