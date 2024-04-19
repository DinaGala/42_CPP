
#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		~Ice();
		// Ice(ARGS);
		Ice(const Ice &other);
		Ice& operator=(const Ice &other);

		AMateria* clone() const;

	private:
    
};

#endif
