/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:51:40 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/07 21:11:26 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public:
		
		Weapon(std::string	type);
		~Weapon();

		const std::string	&getType();
		void				setType(std::string newtype);

	private:
		
		std::string	_type;
};

#endif
