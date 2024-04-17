/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:29:02 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/17 21:34:57 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "	FragTrap Default constructor called" << std::endl;
	_name = "Basic Flag";
	_hitPoints = FRAG_HIT;
	_energyPoints = FRAG_ENERGY;
	_attackDamage = FRAG_ATTACK;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "	FragTrap Name constructor called" << std::endl;
	_name = name;
	_hitPoints = FRAG_HIT;
	_energyPoints = FRAG_ENERGY;
	_attackDamage = FRAG_ATTACK;
}

FragTrap::~FragTrap() 
{
	std::cout << "	FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	_name = other.getName();
	_hitPoints = other.getHit();
	_energyPoints = other.getEnergy();
	_attackDamage = other.getDamage();
}

FragTrap	&FragTrap::operator=(const FragTrap &other) 
{
	std::cout << "	FragTrap Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_name = other.getName();
	_hitPoints = other.getHit();
	_energyPoints = other.getEnergy();
	_attackDamage = other.getDamage();
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << "	I'm your FragTrap " << _name << " guy, gimme a positive high five bro!" << std::endl;
}