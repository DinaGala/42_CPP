/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:28:05 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 19:13:35 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &other);
		MateriaSource& operator=(const MateriaSource &other);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const &type);

	private:
		AMateria	*_library[N];
		bool 		_checkDups(int idx);

    
};

#endif
