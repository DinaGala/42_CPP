/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:54:17 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/08 18:26:46 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	
	if (argc != 2)
		std::cout << "Error: introduce one level of complaint (DEBUG, INFO, WARNING or ERROR)" << std::endl;
	else
		harl.complain(argv[1]);
	return (0);
}