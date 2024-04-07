/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:36:45 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/07 19:45:40 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string &stringREF = str;
	std::string *stringPTR = &str;

	std::cout << "The string memory address: " << &str << std::endl;
	std::cout << "The memory address held by a stringREFERENCE: " << &stringREF << std::endl;
	std::cout << "The memory address held by a stringPOINTER: " << stringPTR << std::endl << std::endl;
	
	std::cout << "The string itself: " << str << std::endl;
	std::cout << "The value pointed by a stringREFERENCE: " << stringREF << std::endl;
	std::cout << "The value pointed by a stringPOINTER: " << *stringPTR << std::endl;
	
	return (0);
}