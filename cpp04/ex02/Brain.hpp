
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>


class Brain
{
	public:
		Brain();
		~Brain();
		// Brain(ARGS);
		Brain(const Brain &other);
		Brain& operator=(const Brain &other);

	private:
		std::string	ideas[100];

    
};

#endif
