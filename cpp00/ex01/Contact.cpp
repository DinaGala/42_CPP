/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:22:52 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/03 19:23:47 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::setNew()
{
	this->_firstName = Contact::_readInput(std::string("First name: "));
	this->_lastName = Contact::_readInput(std::string("Last name: "));
	this->_nickName = Contact::_readInput(std::string("Nickname: "));
	this->_phoneNumber = Contact::_readPhone(std::string("Phone number: "));
	this->_darkestSecret = Contact::_readInput(std::string("Darkest secret: "));
}

std::string	Contact::_readInput(std::string message) const
{
	std::string	input;
	bool		check = false;

	while (!check)
	{
		std::cout << message;
		getline(std::cin, input);
		if (!std::cin)
			exit (1);
		if (input.empty())
			std::cout << "Error: enter some data." << std::endl;
		else 
			check = true;
	}
	return (input);
}

std::string	Contact::_readPhone(std::string message) const
{
	std::string	input;
	bool		check = false;

	while (!check)
	{
		std::cout << message;
		getline(std::cin, input);
		if (!std::cin)
			exit (1);
		if (input.empty())
			std::cout << "Error: enter some data." << std::endl;
		else if (!_checkDigits(input))
			std::cout << "Error: only digits can be used." << std::endl;
		else 
			check = true;
	}
	return (input);
}

bool	Contact::_checkDigits(std::string str) const
{
	for (int i = 0; str[i]; ++i)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

std::string	Contact::getFirstName() const
{
	return (this->_firstName);
}

std::string	Contact::getLastName() const
{
	return (this->_lastName);
}

std::string	Contact::getNickName() const
{
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}