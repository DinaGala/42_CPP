/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:32:17 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/14 17:43:57 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	std::list<int>	cont;
	cont.push_back(24);
	cont.push_back(42);
	cont.push_back(4);
	cont.push_back(2);

	try
	{
		std::cout << easyfind(cont, 24) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
//	std::cout << std::endl;
	
	return (0);
}

