/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:10:40 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/18 20:31:56 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGAAnimal_HPP
#define WRONGAAnimal_HPP

#include <iostream>

class WrongAAnimal
{
	public:
		WrongAAnimal();
		virtual ~WrongAAnimal();
		WrongAAnimal(const WrongAAnimal &other);
		WrongAAnimal& operator=(const WrongAAnimal &other);

		WrongAAnimal(std::string const &type);

		void			makeSound() const;
		std::string		getType() const;

	protected:
		std::string _type;
		
    
};

#endif
