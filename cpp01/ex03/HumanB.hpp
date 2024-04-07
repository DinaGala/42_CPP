/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 20:07:02 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/07 21:05:24 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
	public:
		
		HumanB();
		HumanB(std::string name);
		HumanB(std::string name, Weapon &type);
		~HumanB();

		void		setWeapon(Weapon &weap);
		void		attack();

	private:
		
		std::string	_name;
		Weapon		*_weaponB;
		
};

#endif