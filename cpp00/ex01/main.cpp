/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:45:17 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/03/28 21:54:35 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	pb;
	std::string	in;

	while (42)
	{
		std::cout << "You have an Awesome PhoneBook now! Use ADD, SEARCH or EXIT to manipulate with it" << std::endl;
		getline(std::cin, in);
		if (!std::cin)
			return (1);
		if (in == "ADD")
			pb.addContact();
		if (in == "SEARCH")
			pb.searchContact();
		if (in == "EXIT")
			return (0);
		else
			std::cout << "You have to use ADD, SEARCH or EXIT to manipulate with yor PhoneBook" << std::endl;
	}
	return (0);
}