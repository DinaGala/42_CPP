/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:32:46 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 16:39:17 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>

//class AMateria;

class ICharacter
{
	public:
		
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

};

#endif
