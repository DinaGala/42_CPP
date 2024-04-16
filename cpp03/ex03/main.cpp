/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:17:34 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/16 22:59:53 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	bil("Billy");
	DiamondTrap	ben("Big Ben");

//	bil.setDamage(40);
	bil.attack(ben.getName());
	ben.takeDamage(bil.getDamage());
	bil.attack(ben.getName());
	ben.takeDamage(bil.getDamage());
	ben.attack(bil.getName());
	bil.takeDamage(ben.getDamage());
	bil.attack(ben.getName());
	ben.takeDamage(bil.getDamage());	
	bil.attack(ben.getName());
	ben.takeDamage(bil.getDamage());
	ben.attack(bil.getName());
	bil.takeDamage(ben.getDamage());
	ben.attack(bil.getName());
	bil.takeDamage(ben.getDamage());
	bil.beRepaired(7);
	bil.setEnergy(100);

	ben.whoAmI();

	std::cout << std::endl << "                   GAME OVER!!!" << std::endl << std::endl;

	return (0);
}