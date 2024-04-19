/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:23:24 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/18 20:01:59 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAAnimal.hpp"

class WrongCat: public WrongAAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &other);
		WrongCat& operator=(const WrongCat &other);

		void	makeSound() const;

	private:
    
};

#endif
