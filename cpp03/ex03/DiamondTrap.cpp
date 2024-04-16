/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:03:05 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/16 23:17:20 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():  ClapTrap("Basic_Diamond_clap_name")
{
	
	std::cout << "	DiamondTrap Default constructor called" << std::endl;
	DiamondTrap::_name = "Basic Diamond";
	_hitPoints = this->FragTrap::getHit();
	_energyPoints = this->ScavTrap::getEnergy();
	_attackDamage = this->FragTrap::getDamage();
}

DiamondTrap::DiamondTrap(std::string name): FragTrap(name), ScavTrap(name) 
{
	std::cout << "	DiamondTrap Name constructor called" << std::endl;
	DiamondTrap::_name = name;
	this->ClapTrap::setName(name.append("_clap_name"));
	_hitPoints = this->FragTrap::getHit();
	_energyPoints = this->ScavTrap::getEnergy();
	_attackDamage = this->FragTrap::getDamage();
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
