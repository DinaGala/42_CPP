/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:08:51 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/19 20:28:20 by nzhuzhle         ###   ########.fr       */
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
	
	Animal* animals[10];

	for (int a = 0; a < 5; a++)
		animals[a] = new Dog();
	for (int a = 5; a < 10; a++)
		animals[a] = new Cat();
	for (int a = 0; a < 10; a++)
	{
		std::cout << animals[a]->getType() << " " << std::endl;
		animals[a]->makeSound();
	}
	for (int a = 0; a < 10; a++)
		delete animals[a];

	Dog	tim;
	Dog x = tim;

	tim.setType("Chihuahua");
	std::cout << "Tim is a " << tim.getType() << ", and his brain pointer is: " << tim.getBrain() << std::endl;
	std::cout << "X is a " << x.getType() << ", and his brain pointer is: " << x.getBrain() << std::endl;

	return (0);
}

