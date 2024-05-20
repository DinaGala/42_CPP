/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:27:53 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/20 20:50:14 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int	main(int ac, char **av)
{
	BitcoinExchange	mybtc;

	(void)av;
	try {
		if (ac != 2) 
			throw std::invalid_argument("Invalid number of arguments. Introduce one agrument [exchanges file]");
		mybtc.btc(av[1]);
	}
	catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}

