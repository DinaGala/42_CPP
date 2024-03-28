/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:42:23 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/03/28 22:19:34 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook constructor called" << std::endl;
	this->_number = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook DEstructor called" << std::endl;
}

void	PhoneBook::addContact()
{
		this->_contacts[this->_number % 8].setNew();
		this->_number++;
}

void	PhoneBook::searchContact() const
{
		std::string	in;
		bool		check = false;
		
		std::cout << "Enter the index (from 1 to 8) of the contact you want to see: ";
		getline(std::cin, in);
		if (!std::cin)
			exit (1);
		if (in.length() > 1)

		this->_contacts[this->_number % 8].setNew();
		this->_number++;
}