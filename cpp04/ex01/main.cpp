/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:08:51 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 15:32:58 by nzhuzhle         ###   ########.fr       */
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
	Dog x(tim);
	Dog tom;

	std::cout << "Tom is a " << tom.getType() << ", and his brain pointer is: " << tom.getBrain() << std::endl;
	std::cout << "X is a " << x.getType() << ", and his brain pointer is: " << x.getBrain() << std::endl;
	tom = x;
	std::cout << "after assigning Tom is a " << tom.getType() << ", and his brain pointer is: " << tom.getBrain() << std::endl;
	std::cout << "after assigning X is a " << x.getType() << ", and his brain pointer is: " << x.getBrain() << std::endl;

	x.setBrainIdeas("White noise");
	std::cout << "I'm X and I got an Idea: ";
	x.printBrainIdea(1);
	std::cout << "I'm Tom and I got an Idea: ";
	tom.printBrainIdea(1);

	tim.setType("Chihuahua");
	tim.setBrainIdeas("I'm such a beautiful little creature");
	std::cout << "Tim is a " << tim.getType() << ", and his brain pointer is: " << tim.getBrain() << ", his idea is: " << std::endl;
	tim.printBrainIdea(1);
	std::cout << "X is a " << x.getType() << ", and his brain pointer is: " << x.getBrain() << ", his idea is: " << std::endl;
	x.printBrainIdea(1);

	tim.noBrain();
	x.setType("Pig Dog");
	std::cout << "After deleting Tim, Tom is a " << tom.getType() << ", and his brain pointer is: " << tom.getBrain() << ", his idea is: " << std::endl;
	tom.printBrainIdea(1);
	std::cout << "After deleting Tim, X is a " << x.getType() << ", and his brain pointer is: " << x.getBrain() << ", his idea is: " << std::endl;
	x.printBrainIdea(1);

	x.noBrain();
	std::cout << "After deleting X and Tim, Tom is a " << tom.getType() << ", and his brain pointer is: " << tom.getBrain() << ", his idea is: " << std::endl;
	tom.printBrainIdea(1);
	std::cout << "After deleting X and Tim, Tim is a " << tim.getType() << ", and his brain pointer is: " << tim.getBrain() << ", his idea is: " << std::endl;
	tim.printBrainIdea(1);
	std::cout << "After deleting X and Tim, X is a " << x.getType() << ", and his brain pointer is: " << x.getBrain() << ", his idea is: " << std::endl;
	x.printBrainIdea(1);

	std::cout << std::endl << "------------ NOW CATS -----------------" << std::endl << std::endl;

	Cat bim;
	Cat y(bim);
	Cat bom;

	std::cout << "Bom is a " << bom.getType() << ", and his brain pointer is: " << bom.getBrain() << std::endl;
	std::cout << "Y is a " << y.getType() << ", and his brain pointer is: " << y.getBrain() << std::endl;
	bom = y;
	std::cout << "after assigning Bom is a " << bom.getType() << ", and his brain pointer is: " << bom.getBrain() << std::endl;
	std::cout << "after assigning Y is a " << y.getType() << ", and his brain pointer is: " << y.getBrain() << std::endl;

	bim.setType("Chihuahua");
	std::cout << "Bim is a " << bim.getType() << ", and his brain pointer is: " << bim.getBrain() << std::endl;
	std::cout << "Y is a " << y.getType() << ", and his brain pointer is: " << y.getBrain() << std::endl;

	std::cout << std::endl << "------------ THE END -----------------" << std::endl << std::endl;

	return (0);
}

