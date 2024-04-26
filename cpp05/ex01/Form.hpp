/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:08:27 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/26 20:29:50 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		~Form();
		Form(std::string const &name, int signGrade, int execGrade);
		Form(const Form &other);
		Form& operator=(const Form &other);

		std::string const	getName() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		bool				getIfSigned() const;

		void 				beSigned(const Bureaucrat &bur);

		class GradeTooHighException: public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const throw();
		};
		class AlreadySignedException: public std::exception
		{
			public:
				const char *what() const throw();
		};

	private:
		const std::string 	_name;
		const int			_signGrade;
		const int			_execGrade;
		bool				_ifSigned;

};

std::ostream	&operator<<(std::ostream &out, const Form &form);

#endif
