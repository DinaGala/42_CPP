/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 21:00:49 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/28 21:47:45 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"
# include <string>
# include <fstream>

class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);

		void	beExecuted() const;
		std::string	getTarget() const;

	private:
		std::string	_target;
};

std::ostream	&operator<<(std::ostream &out, const ShrubberyCreationForm &form);

#endif
