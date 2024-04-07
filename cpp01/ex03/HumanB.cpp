/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 20:35:49 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/07 21:25:17 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(): _name("Noname") {}
HumanB::HumanB(std::string name): _name(name), _weaponB(NULL) {}
HumanB::HumanB(std::string name, Weapon &weap): _name(name), _weaponB(&weap) {}

HumanB::~HumanB()
{
	return ;
}

void		HumanB::setWeapon(Weapon &weap)
{
	_weaponB = &weap;
}

void	HumanB::attack()
{
	if (_weaponB)
		std::cout << _name << " attacks with their " << _weaponB->getType() << std::endl;
	else
		std::cout << _name << " has no weapon!" << std::endl;
}