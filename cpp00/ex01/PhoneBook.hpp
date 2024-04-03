/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:33:00 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/03 17:40:27 by nzhuzhle         ###   ########.fr       */
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
		void	printContacts() const;

	private:

		Contact	_contacts[8];
		int		_number;
};

#endif