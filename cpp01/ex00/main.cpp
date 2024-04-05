/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 20:10:31 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/05 21:51:46 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombie1;
	Zombie	defzomb;

	zombie1 = newZombie("Charly");
	randomChump("Billy");

	delete zombie1;
	return (0);
}