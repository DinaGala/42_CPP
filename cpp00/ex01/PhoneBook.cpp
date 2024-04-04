/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:42:23 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/04 22:36:57 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_number = 0;
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::addContact()
{
		this->_contacts[this->_number % 8].setNew();
		this->_number++;
}

void	PhoneBook::printContacts() const
{
	std::cout << std::endl << std::right << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	std::cout << "____________________________________________" << std::endl;
	for (int i = 0; i < 8 && i < this->_number; ++i)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		if (this->_contacts[i].getFirstName().size() > 10)
			std::cout << std::setw(9) << this->_contacts[i].getFirstName().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->_contacts[i].getFirstName() << "|";
		if (this->_contacts[i].getLastName().size() > 10)
			std::cout << std::setw(9) << this->_contacts[i].getLastName().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->_contacts[i].getLastName() << "|";
		if (this->_contacts[i].getNickName().size() > 10)
			std::cout << std::setw(9) << this->_contacts[i].getNickName().substr(0, 9) << "." << std::endl;
		else
			std::cout << std::setw(10) << this->_contacts[i].getNickName() << std::endl;
	}
}

void	PhoneBook::searchContact() const
{
		std::string	in;
		int		index = 0;
		bool	check = false;
		
		if (!this->_number)
		{
			std::cout << "Your PhoneBook is empty. Add some contacts to be able to search." << std::endl;
			return ;
		}
		printContacts();
		while (!check)
		{ 
			std::cout << "Enter the index (from 1 to 8) of the contact you want to see: ";
			getline(std::cin, in);
			if (!std::cin)
				exit (1);
			else if (in.empty() || in.length() > 1 || in[0] <= '0' || in[0] > '8')
				std::cout << "Error: enter a valid index." << std::endl;
			else
				check = true;
		}
		index = std::stoi(in);
		if (index <= this->_number)
		{
			index--;
			std::cout << "First name: " << this->_contacts[index].getFirstName() << std::endl;
			std::cout << "Last name: " << this->_contacts[index].getLastName() << std::endl;
			std::cout << "Nickname: " << this->_contacts[index].getNickName() << std::endl;
			std::cout << "Phone number: " << this->_contacts[index].getPhoneNumber() << std::endl;
			std::cout << "Darkest secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
		}
		else
			std::cout << "Sorry, this index doesn't exist. You can try another one." << std::endl;

}