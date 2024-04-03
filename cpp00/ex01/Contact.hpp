/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:23:22 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/03 19:20:14 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <cctype>

class	Contact
{
	public:
	
		Contact();
		~Contact();

		void		setNew();
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickName() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;
	
	private:

		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

		std::string	_readInput(std::string message) const;
		std::string	_readPhone(std::string message) const;
		bool		_checkDigits(std::string str) const;

};

#endif
