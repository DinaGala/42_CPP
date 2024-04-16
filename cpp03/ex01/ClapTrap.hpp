/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:09:05 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/16 19:42:00 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap& operator=(const ClapTrap &other);
		~ClapTrap();
		
		std::string	getName( void ) const;
		int			getHit( void ) const;		
		int			getEnergy( void ) const;
		int			getDamage( void ) const;
		void		setEnergy(unsigned int energy);
		void		setDamage(unsigned int damage);

		void 		attack(const std::string& target);
		void 		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		
	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif