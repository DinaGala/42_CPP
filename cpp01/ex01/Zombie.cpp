/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 20:10:13 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/05 22:12:21 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_name = "Very Basic";
	std::cout << "A " << this->_name << " Zombie is born!" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
	std::cout << "The Zombie now is named " << this->_name << "!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "A " << this->_name << " Zombie is destroyed..." << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}