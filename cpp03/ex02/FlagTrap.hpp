/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:24:23 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/16 21:49:59 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FlagTrap: public ClapTrap
{
	public:
		FlagTrap();
		FlagTrap(std::string name);
		FlagTrap(const FlagTrap &other);
		FlagTrap& operator=(const FlagTrap &other);
		~FlagTrap();
		
		void	highFivesGuys(void);

};

#endif