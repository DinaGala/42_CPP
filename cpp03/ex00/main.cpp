/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:17:34 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/15 22:30:15 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	bil("Billy");
	ClapTrap	ben("Big Ben");

	ben.setDamage(3);
	bil.attack(ben.getName());
	ben.takeDamage(bil.getDamage());
	ben.attack(bil.getName());
	bil.takeDamage(ben.getDamage());
	ben.attack(bil.getName());
	bil.takeDamage(ben.getDamage());
	ben.attack(bil.getName());
	bil.takeDamage(ben.getDamage());
	ben.attack(bil.getName());
	bil.takeDamage(ben.getDamage());
	ben.attack(bil.getName());
	bil.takeDamage(ben.getDamage());
	bil.beRepaired(7);
	ben.attack(bil.getName());
	bil.takeDamage(ben.getDamage());
	ben.attack(bil.getName());
	bil.takeDamage(ben.getDamage());
	ben.attack(bil.getName());
	bil.takeDamage(ben.getDamage());
	ben.attack(bil.getName());
	bil.takeDamage(ben.getDamage());
	bil.beRepaired(7);
	bil.setEnergy(100);

	std::cout << std::endl << "                   GAME OVER!!!" << std::endl << std::endl;

	return (0);
}