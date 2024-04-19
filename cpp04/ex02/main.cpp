/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:08:51 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/19 20:32:00 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAAnimal.hpp"
#include "WrongCat.hpp"


int	main(int argc, char **argv)
{

	(void)argc;
	(void)argv;
	
	// AAnimal	no;
	// const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	const WrongAAnimal* x = new WrongCat();
	// const Dog* j = new Dog();
	// const Cat* i = new Cat();
	// const WrongCat* x = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << x->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	// meta->makeSound();
	x->makeSound();

	// delete meta;
	delete j;
	delete i;
	delete x;
	

	Dog	tim;
	Dog other = tim;

	tim.setType("Chihuahua");
	std::cout << "Tim is a " << tim.getType() << ", and his brain pointer is: " << tim.getBrain() << std::endl;
	std::cout << "Other is a " << other.getType() << ", and his brain pointer is: " << other.getBrain() << std::endl;

	return (0);
}

