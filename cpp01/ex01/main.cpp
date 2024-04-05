/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 20:10:31 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/05 22:18:34 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombie1;

	zombie1 = zombieHorde(NZ, "Charly");
	for (int i = 0; i < NZ; ++i)
		zombie1[i].announce();
	delete[] zombie1;
	return (0);
}