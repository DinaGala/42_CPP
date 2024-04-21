/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:21:35 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 16:21:37 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		~Ice();
		// Ice(ARGS);
		Ice(const Ice &other);
		Ice& operator=(const Ice &other);

		AMateria* clone() const;
		void use(ICharacter& target);

	private:
    
};

#endif
