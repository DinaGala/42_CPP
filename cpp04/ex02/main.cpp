/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:08:51 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 15:35:58 by nzhuzhle         ###   ########.fr       */
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
	const WrongAAnimal* w = new WrongCat();
	// const Dog* j = new Dog();
	// const Cat* i = new Cat();
	// const WrongCat* x = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << w->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	// meta->makeSound();
	w->makeSound();

	// delete meta;
	delete j;
	delete i;
	delete w;
	
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

