/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 21:28:08 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/28 21:56:20 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"


class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &other);

		void		beExecuted() const;
		std::string	getTarget() const;

	private:
		std::string	_target;
};

std::ostream	&operator<<(std::ostream &out, const PresidentialPardonForm &form);

#endif
