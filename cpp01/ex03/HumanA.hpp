/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:56:36 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/07 21:02:40 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	public:
		
		HumanA(Weapon &weap);
		HumanA(std::string name, Weapon &weap);
		~HumanA();

		void		attack();

	private:
		
		std::string	_name;
		Weapon		&_weaponA;
		
};

#endif