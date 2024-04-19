/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:23:46 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/19 19:53:31 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
		// Dog(ARGS);
		Dog(const Dog &other);
		Dog& operator=(const Dog &other);

		void	makeSound() const;
		Brain	*getBrain()	const;

	private:
		Brain	*_dogBrain;
};

#endif
