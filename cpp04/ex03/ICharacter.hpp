
#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>


class ICharacter
{
	public:
		ICharacter();
		~ICharacter();
		// ICharacter(ARGS);
		ICharacter(const ICharacter &other);
		ICharacter& operator=(const ICharacter &other);

	private:
    
};

#endif
