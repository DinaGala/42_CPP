#ifndef _HPP
# define _HPP

# include <iostream>

class 
{
	public:
		<>();
		<>(const <> &other);
		<>& operator=(const <> &other);
		~<>();
		
		int		get( void ) const;
		void	set( int const raw );
		
	private:


};

#endif

_________________________________________________________________


#include ""

name::name(): _variable(0) 
{
//	std::cout << "Default constructor called" << std::endl;
}

name::~name() 
{
//	std::cout << "Destructor called" << std::endl;
}

name::name(const int value): _value(value << _frac) 
{
//	std::cout << "Int constructor called" << std::endl;
}

name::name(const name &other)
{
//	std::cout << "Copy constructor called" << std::endl;
	_value = other.get();
}

name	&name::operator=(const name &other) 
{
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_value = other.get();
	return (*this);
}