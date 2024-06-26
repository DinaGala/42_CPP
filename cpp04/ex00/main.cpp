/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:08:51 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 15:38:36 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int	main(int argc, char **argv)
{

	(void)argc;
	(void)argv;
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* x = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!

	std::cout << x->getType() << " " << std::endl;
	x->makeSound();

	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	

	delete meta;
	delete j;
	delete i;
	delete x;
	
	return (0);
}

