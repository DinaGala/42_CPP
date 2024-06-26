/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:17:34 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/16 21:43:38 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	bil("Billy");
	ScavTrap	ben("Big Ben");

	
//	bil.setEnergy(100);
	bil.attack(ben.getName());
	ben.takeDamage(bil.getDamage());
	ben.guardGate();
	bil.setDamage(40);
	bil.attack(ben.getName());
	ben.takeDamage(bil.getDamage());
	ben.attack(bil.getName());
	bil.takeDamage(ben.getDamage());
	bil.beRepaired(7);
	bil.attack(ben.getName());
	ben.takeDamage(bil.getDamage());
	bil.beRepaired(7);	
	bil.attack(ben.getName());
	ben.takeDamage(bil.getDamage());

	bil.setEnergy(100);

	std::cout << std::endl << "                   GAME OVER!!!" << std::endl << std::endl;

	return (0);
}