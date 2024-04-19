
#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>


class IMateriaSource
{
	public:
		IMateriaSource();
		~IMateriaSource();
		// IMateriaSource(ARGS);
		IMateriaSource(const IMateriaSource &other);
		IMateriaSource& operator=(const IMateriaSource &other);

	private:
    
};

#endif
