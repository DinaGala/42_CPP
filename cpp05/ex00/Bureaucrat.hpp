/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:01:45 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/24 20:50:00 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>

# define MAX_GRADE 1
# define MIN_GRADE 150

class Bureaucrat
{
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat& operator=(const Bureaucrat &other);

		std::string const	getName() const;
		int					getGrade() const;

		void				plusGrade();
		void				minusGrade();
		
	private:
		const std::string 	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bur);

#endif
