/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 20:18:04 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/07 21:12:46 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newtype)
{
	this->_type = newtype;
}

Weapon::~Weapon()
{
	return ;
}

const std::string	&Weapon::getType()
{
	const std::string	&type = this->_type;
	return (type);
}

void		Weapon::setType(std::string newtype)
{
	this->_type = newtype;
}