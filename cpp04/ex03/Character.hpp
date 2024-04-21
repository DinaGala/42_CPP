/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:36:19 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 20:45:01 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
		Character();
		~Character();
		Character(std::string const &name);
		Character(const Character &other);
		Character& operator=(const Character &other);
		
		std::string const & getName() const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		void	printChar();
		
	private:
		std::string	_name;
		AMateria	*_slots[N];
		bool 		_checkDups(int idx);
    
};



#endif
