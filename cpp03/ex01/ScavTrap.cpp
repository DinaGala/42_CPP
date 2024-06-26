/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:13:28 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/16 21:37:23 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "		ScavTrap Default constructor called" << std::endl;
	_name = "Basic Scav";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "		ScavTrap Name constructor called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap() 
{
	std::cout << "		ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "		ScavTrap Copy constructor called" << std::endl;
	_name = other.getName();
	_hitPoints = other.getHit();
	_energyPoints = other.getEnergy();
	_attackDamage = other.getDamage();
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other) 
{
	std::cout << "		ScavTrap Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_name = other.getName();
	_hitPoints = other.getHit();
	_energyPoints = other.getEnergy();
	_attackDamage = other.getDamage();
	return (*this);
}

void 	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints < 1)
		std::cout << "		ScavTrap " << _name << " cannot attack anyone, he is very tired!" << std::endl << std::endl;
	else if (_hitPoints < 1)
		std::cout << "		ScavTrap " << _name << " cannot attack anyone because he is out of hit points! (even though it doesn't make any sense)" << std::endl << std::endl;
	else
	{
		std::cout << "		ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl  << std::endl;
		_energyPoints--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "		ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}