/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:16:31 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 21:15:05 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"


int materia_test()
{
   std::cout <<std::endl;
    std::cout<<  "************************************************************"  << std::endl;
    std::cout<<  "                  MATERIA TESTING                        "  << std::endl;
    std::cout<<  "************************************************************"  << std::endl;
    std::cout <<std::endl;
    std::cout << std::endl <<  "Test 1 : Creating MateriaSource, empty then learn"  << std::endl;
    MateriaSource* src = new MateriaSource();
    std::cout <<std::endl <<  "displaying content (null)"  << std::endl;
    src->printSrc();
    std::cout << std::endl <<  "learning 2 Ice and 1 Cure materia"  << std::endl;
    
	AMateria *cold = new Ice();
	AMateria *warm = new Cure();
	AMateria *warm2 = new Cure();
	src->learnMateria(cold);
	src->learnMateria(warm);
	AMateria *cold2 = new Ice();
	AMateria *cold3 = new Ice();
	src->learnMateria(cold2);
    src->printSrc();

    std::cout << std::endl <<  "Test 2 : Deep copy MateriaSource (with Assignment toverloader)"  << std::endl;
    MateriaSource copy = *src;
    std::cout << std::endl <<  "Display content (same type as source / different pointer)"  << std::endl;
    copy.printSrc();

    std::cout << std::endl <<  "adding 1 Cure in original "  << std::endl;
	src->learnMateria(warm2);
    std::cout << std::endl <<  "display Original "  << std::endl;
    src->printSrc();
    std::cout << std::endl <<  "display Copy "  << std::endl;
    copy.printSrc();

    std::cout << std::endl <<  "adding 1 Ice in copy "  << std::endl;
	src->learnMateria(cold3);
	delete cold3;
    std::cout << std::endl <<  "display Original "  << std::endl;
    src->printSrc();
    std::cout << std::endl <<  "display Copy "  << std::endl;
    copy.printSrc();

    std::cout << std::endl <<  "Test 3 : Creating Materia From Templates"  << std::endl;
    AMateria *m1 = NULL;
    AMateria *m2 = NULL;
    AMateria *m3 = NULL;

    m1 = src->createMateria("ice");
    if (m1)
        std::cout << "From template created materia of type: " << m1->getType() << std::endl;
    else
        std::cout << "Impossible to learn fro template, unkmown type " << std::endl;

    m2 = src->createMateria("cure");
    if (m2)
        std::cout << "From template created materia of type: " << m2->getType() << std::endl;
    else
        std::cout << "Impossible to learn fro template, unkmown type " << std::endl;

    m3 = src->createMateria("Water");
    if (m3)
        std::cout << "From template created materia of type: " << m3->getType() << std::endl;
    else
        std::cout << "Impossible to learn fro template, unkmown type " << std::endl;
    std::cout << std::endl <<  "Test 4 : Trying to learn too much material"  << std::endl;
    src->learnMateria(m1);
    src->learnMateria(m2);
    std::cout << std::endl <<  "Test 5 : Trying to learn NULL materia"  << std::endl;
    src->learnMateria(m3);

    std::cout << std::endl <<  "Cleaning Memory from allocated ressources"  << std::endl;
    delete src;
    delete m1;
    delete m2;
	//delete cold;
	// delete warm;
	// delete cold2;
	// delete warm2;
    return (0);

}

int character_test()
{
    std::cout <<std::endl;
    std::cout<<  "************************************************************"  << std::endl;
    std::cout<<  "                CHARACTER TESTING                        "  << std::endl;
    std::cout<<  "************************************************************"  << std::endl;
    std::cout <<std::endl;
    std::cout << std::endl <<  "Creating Materia"  << std::endl;
    AMateria *s1, *s2;
    s1 = new Ice();
    s2 = new Cure();

    std::cout << std::endl <<  "Creating and filling a MateriaSrouce"  << std::endl;
    MateriaSource src;
    src.learnMateria(s1);
    src.learnMateria(s2);

    std::cout << std::endl <<  "Display MateriaSrouce"  << std::endl;

    src.printSrc();
    std::cout << std::endl <<  "TEST 1 : creating a Character and use inventory"  << std::endl;

    std::cout << std::endl <<  "Create bob, with empty inventory (default constructor)"  << std::endl;
    Character *Bob = new Character("Bob");
    Bob->printChar();

    std::cout << std::endl <<  "now equip Bob with 2 materia from the materia source (ice and cure) - same pointers"  << std::endl;
    Bob->equip(s1);
    Bob->equip(s2);
    Bob->printChar();

    std::cout << std::endl <<  "now we unequip Bob in those 2 slots, empty inventory"  << std::endl;
    std::cout <<  "we do these because memory ownership is in MateriaSource and not Character"  << std::endl;
    std::cout <<  "we would have a double free if we keep it here (both destructor would delete it)"  << std::endl;
	Bob->unequip(0);
    Bob->unequip(1);
    Bob->printChar();

    std::cout << std::endl << "create 2 materia out of the factory"  << std::endl;
    AMateria *m1 = src.createMateria("ice");
    AMateria *m2 = src.createMateria("cure");

    std::cout << std::endl << "now we equip Bob with these materia - same type but different pointers"  << std::endl;
    Bob->equip(m1);
    Bob->equip(m2);
    Bob->printChar();

    std::cout << std::endl << "TEST 2 : Deep Copy - Assignment overloader " << std::endl;
    Character *copy = new Character();
    *copy = *Bob;
    std::cout << std::endl << "displaying source character inventory" << std::endl;
    Bob->printChar();
    std::cout << std::endl << "displaying copy character inventory - same type but different pointers" << std::endl;
    copy->printChar();
    std::cout << std::endl << "now deleting copy"  << std::endl;
    delete copy;

    std::cout << std::endl << "TEST 3 : Equip / Unequip edge cases" << std::endl;
    Bob->unequip(0);
    Bob->unequip(1);
    Bob->equip(s1);
    Bob->equip(s2);
    Bob->equip(m1);
    Bob->equip(m2);
    Bob->printChar();
    std::cout << std::endl << "adding NULL" << std::endl;
    Bob->equip(NULL);
    std::cout << std::endl << "Testing incorrrect index (1000, -1, 4)" << std::endl;
    Bob->unequip(10000);
    Bob->unequip(-1);
    Bob->unequip(5);
    std::cout << std::endl << "Testing use incorrect index 100" << std::endl;
    Bob->use(100, *Bob);
    std::cout << std::endl << "Testing Unequip slot 0 and use after"  << std::endl;
    Bob->unequip(0);
    Bob->use(0, *Bob);

    std::cout << std::endl << "Cleaning Memory from allocated ressources" << std::endl;
    Bob->unequip(0);
    Bob->unequip(1);
    delete Bob;
	// delete s1;
	// delete s2;
    return (0);
}

int fight_club()
{
    std::cout <<std::endl;
    std::cout<< "************************************************************"<< std::endl;
    std::cout<< "                FIGHT CLUB TESTING                       " << std::endl;
    std::cout<< "************************************************************" << std::endl;
    std::cout <<std::endl;
    std::cout << std::endl << "Creating Materia"  << std::endl;
    AMateria *s1, *s2, *m1, *m2;
    s1 = new Ice();
    s2 = new Cure();

    MateriaSource src;
    src.learnMateria(s1);
    src.learnMateria(s2);
    m1 = src.createMateria("ice");
    m2 = src.createMateria("cure");
    src.learnMateria(m1);
    src.learnMateria(m2);
    std::cout << std::endl << "Creating 2 Fighters" << std::endl;
    Character tyler("Tyler");
    Character durden("Durden");
    std::cout << std::endl << "Equipping the 2 Fighters"  << std::endl;
    tyler.equip(s1);
    tyler.equip(s2);
    tyler.equip(m1);
    tyler.equip(m2);
    durden.equip(m2);
    durden.equip(m1);
    durden.equip(s2);
    durden.equip(s1);
    tyler.printChar();
    durden.printChar();
    std::cout <<std::endl;
    std::cout << std::endl << "           FIGHT TIME          " << std::endl;
    std::cout <<std::endl;
    tyler.use(0, durden);
    durden.use(0, durden);
    durden.use(1, tyler);
    tyler.use(1, tyler);
    durden.use(3, tyler);
    tyler.use(3, durden);

    std::cout << std::endl <<  "FIGHT is over, remeber the first rule of the fight club" << std::endl;
    std::cout << std::endl << "Unequipping fighers, and we don't talk about the fight club" << std::endl;

    for (int i = 0; i < 4; ++i)
    {
        tyler.unequip(i);
        durden.unequip(i);
    }
    return (0);

}


void	basicTest2(void) 
{
	std::cout << std::endl << "===========================================" << std::endl;
	std::cout << "Extra test" << std::endl;
	std::cout << "===========================================" << std::endl;

	IMateriaSource *	src = new MateriaSource();
	ICharacter *		mopo = new Character("Mopo");
	AMateria *			tmp;

	AMateria *cold = new Ice();
	AMateria *warm = new Cure();
	src->learnMateria(cold);
	src->learnMateria(warm);
	AMateria *cold2 = new Ice();
	AMateria *warm2 = new Cure();
	src->learnMateria(cold2);
	src->learnMateria(warm2);

	tmp = src->createMateria("ice");
	mopo->equip(tmp);
	mopo->equip(src->createMateria("icea"));

	tmp = src->createMateria("ice");
	mopo->equip(tmp);

	tmp = src->createMateria("cure");
	mopo->equip(tmp);

	tmp = src->createMateria("ice");
	mopo->equip(tmp);

	tmp = src->createMateria("cure");
	mopo->equip(tmp);
	delete tmp;

	Character *	ziski = new Character("Ziski");
	Character	ovi("Ovi");
	
	tmp = src->createMateria("cure");
	ziski->equip(tmp);
	tmp = src->createMateria("ice");
	ziski->equip(tmp);

	std::cout << std::endl << "+++++++ Testing interactions +++++++" << std::endl;
	mopo->use(0, *ziski);
	mopo->use(-1, *ziski);
	mopo->use(1, *ziski);
	mopo->use(2, *ziski);
	mopo->use(3, *ziski);
	mopo->use(4, *ziski);
	ovi.use(0, *mopo);
	ziski->use(1, ovi);

	delete src;
	delete mopo;
	delete ziski;
	// delete cold;
	// delete warm;
	// delete cold2;
	// delete warm2;
}

void	basicTest1()
{
	std::cout << std::endl << "===========================================" << std::endl;
	std::cout << "Subject test" << std::endl;
	std::cout << "===========================================" << std::endl;

	IMateriaSource* src = new MateriaSource();
	
	AMateria *cold = new Ice();
	AMateria *warm = new Cure();
	src->learnMateria(cold);
	src->learnMateria(warm);

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
//	delete cold;
//	delete warm;
}

int	main(int argc, char **argv)
{

	(void)argc;
	(void)argv;

	basicTest1();
	basicTest2();
	
	materia_test();
    character_test();
    fight_club();

	std::cout << std::endl;
	
	return (0);
}

