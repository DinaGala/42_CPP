/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:51:07 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 16:07:58 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"


class AMateria
{
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &other);
		AMateria& operator=(const AMateria &other);

		std::string const &getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string	_type;
};

#endif
