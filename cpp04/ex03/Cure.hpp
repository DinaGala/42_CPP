/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:10:45 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 16:14:59 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure &other);
		Cure& operator=(const Cure &other);

		AMateria* clone() const;
		void use(ICharacter& target);


	private:
		
};

#endif
