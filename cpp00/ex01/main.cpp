/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:45:17 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/03 19:21:33 by nzhuzhle         ###   ########.fr       */
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
		else if (in == "SEARCH")
			pb.searchContact();
		else if (in == "EXIT")
			return (0);
		else
			std::cout << "You can use only ADD, SEARCH or EXIT to manipulate with your PhoneBook" << std::endl;
	}
	return (0);
}