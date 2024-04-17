/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:14:13 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/17 21:41:31 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Very Basic"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Name constructor called" << std::endl;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	_name = other.getName();
	_hitPoints = other.getHit();
	_energyPoints = other.getEnergy();
	_attackDamage = other.getDamage();
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other) 
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_name = other.getName();
	_hitPoints = other.getHit();
	_energyPoints = other.getEnergy();
	_attackDamage = other.getDamage();
	return (*this);
}

std::string		ClapTrap::getName( void ) const
{
	return (_name);
}

int		ClapTrap::getHit( void ) const
{
	return (_hitPoints);
}

int		ClapTrap::getEnergy( void ) const
{
	return (_energyPoints);
}

int		ClapTrap::getDamage( void ) const
{
	return (_attackDamage);
}

void	ClapTrap::setEnergy(unsigned int energy)
{
	std::cout << "ClapTrap " << _name << " fell asleep to get more energy." << std::endl;
	_energyPoints += energy;
}

void	ClapTrap::setDamage(unsigned int damage)
{
	std::cout << "ClapTrap " << _name << " updated Attack Damage to " << damage << std::endl;
	_attackDamage += damage;
}

void		ClapTrap::setName(std::string name)
{
	_name = name;
}

void 	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints < 1)
		std::cout << "ClapTrap " << _name << " cannot attack anyone, he is very tired!" << std::endl;
	else if (_hitPoints < 1)
		std::cout << "ClapTrap " << _name << " cannot attack anyone because he is out of hit points! (even though it doesn't make any sense)" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < 1)
		std::cout << "ClapTrap " << _name << " cannot take any damage, because he is out of hit points!" << std::endl;
	else if (_energyPoints < 1)
		std::cout << "ClapTrap " << _name << " cannot take any damage, he is very tired! (even though it doesn't make any sense)" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " took " << amount << " level of damage." << std::endl;
	if (amount >= _hitPoints && _hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "Now ClapTrap " << _name << " is out of hit points, the damage was too big." << std::endl;
		_hitPoints = 0;
	}
	else if (_hitPoints > 0 && _energyPoints > 0)
	{
		_hitPoints -= amount;
		std::cout << "Now ClapTrap " << _name << " has " << _hitPoints << " hit points." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints < 1)
		std::cout << "ClapTrap " << _name << " cannot get repaired, he is very tired!" << std::endl;
	else if (_hitPoints < 1)
		std::cout << "ClapTrap " << _name << " cannot get repaired because he is out of hit points! (even though it doesn't make any sense)" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " got repaired " << amount << " hit points." << std::endl;
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "Now ClapTrap " << _name << " has " << _hitPoints << "hit points." << std::endl;
	}
}