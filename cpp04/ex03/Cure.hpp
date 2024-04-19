
#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		~Cure();
		// Cure(ARGS);
		Cure(const Cure &other);
		Cure& operator=(const Cure &other);

		AMateria* clone() const;


	private:
		
};

#endif
