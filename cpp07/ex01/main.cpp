/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:53:04 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/03 21:38:18 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	int		arr[3] = {1, 2, 3};
	char	chr[2] = {'f', 'd'};
	double	dbr[4] = {0.42, 4.2, 42.0, 420.0};
	std::string	str[2] = {"hello ", "world"};
	char	*no = nullptr;

	iter(arr, 3, printT);
	std::cout << std::endl;
	iter(chr, 2, printT);
	std::cout << std::endl;
	iter(dbr, 4, printT);
	std::cout << std::endl;
	iter(str, 2, printT);
	std::cout << std::endl;
	iter(no, 3, printT);
	
	return (0);
}

