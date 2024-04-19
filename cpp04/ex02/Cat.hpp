/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:23:24 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/19 20:05:14 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	public:
		Cat();
		~Cat();
		// Cat(ARGS);
		Cat(const Cat &other);
		Cat& operator=(const Cat &other);

		void	makeSound() const;
		Brain	*getBrain()	const;

	private:
		Brain	*_catBrain;
};

#endif
