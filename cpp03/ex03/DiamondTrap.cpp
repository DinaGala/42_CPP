/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:03:05 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/17 21:50:57 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "	DiamondTrap Default constructor called" << std::endl;
	DiamondTrap::_name = "Basic Diamond";
	ClapTrap::setName("Basic Diamond_clap_name");
	_hitPoints = FRAG_HIT;
	_attackDamage = FRAG_ATTACK;
	_energyPoints = SCAV_ENERGY;
}

DiamondTrap::DiamondTrap(std::string name): FragTrap(name), ScavTrap(name) 
{
	std::cout << "	DiamondTrap Name constructor called" << std::endl;
	DiamondTrap::_name = name;
	ClapTrap::setName(name.append("_clap_name"));
	_hitPoints = FRAG_HIT;
	_attackDamage = FRAG_ATTACK;
	_energyPoints = SCAV_ENERGY;
}

DiamondTrap::~DiamondTrap() 
{
	std::cout << "	DiamondTrap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other) 
{
	std::cout << "	DiamondTrap Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_name = other.getName();
	this->ClapTrap::_name = other.ClapTrap::getName();
	_hitPoints = other.getHit();
	_energyPoints = other.getEnergy();
	_attackDamage = other.getDamage();
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "	My own name is:  " << _name << ", my ClapTrap's name is: " << ClapTrap::getName() << std::endl;
}
