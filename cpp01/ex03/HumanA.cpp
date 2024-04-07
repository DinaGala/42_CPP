/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 20:17:27 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/07 21:02:51 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(Weapon &weap): _name("Noname"), _weaponA(weap) {}
HumanA::HumanA(std::string name, Weapon &weap): _name(name), _weaponA(weap) {}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weaponA.getType() << std::endl;
}
