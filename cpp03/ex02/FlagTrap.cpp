/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:29:02 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/16 21:50:28 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FlagTrap.hpp"

FlagTrap::FlagTrap()
{
	std::cout << "	FlagTrap Default constructor called" << std::endl;
	_name = "Basic Flag";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FlagTrap::FlagTrap(std::string name)
{
	std::cout << "	FlagTrap Name constructor called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FlagTrap::~FlagTrap() 
{
	std::cout << "	FlagTrap Destructor called" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &other)
{
	std::cout << "FlagTrap Copy constructor called" << std::endl;
	_name = other.getName();
	_hitPoints = other.getHit();
	_energyPoints = other.getEnergy();
	_attackDamage = other.getDamage();
}

FlagTrap	&FlagTrap::operator=(const FlagTrap &other) 
{
	std::cout << "	FlagTrap Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_name = other.getName();
	_hitPoints = other.getHit();
	_energyPoints = other.getEnergy();
	_attackDamage = other.getDamage();
	return (*this);
}

void	FlagTrap::highFivesGuys()
{
	std::cout << "	I'm your FlagTrap " << _name << " guy, gimme a positive high five bro!" << std::endl;
}