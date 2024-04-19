/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:10:40 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/19 19:49:46 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &other);
		Animal& operator=(const Animal &other);

		Animal(std::string const &type);

		virtual void	makeSound() const;
		std::string		getType() const;
		void			setType(std::string type);

	protected:
		std::string _type;
		
    
};

#endif
