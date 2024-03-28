/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:33:00 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/03/28 21:50:14 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cctype>
# include "Contact.hpp"

class PhoneBook
{
	public:

		PhoneBook();
		~PhoneBook();

		void	addContact();
		void	searchContact() const;


	private:

		Contact	_contacts[8];
		int		_number;
};

#endif