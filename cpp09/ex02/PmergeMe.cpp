

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(int ac, char **av)
{
	_readInput(ac, av);
	_sortDQ(ac, av);
	_sortLST(ac, av);
}

PmergeMe::~PmergeMe()
{
	_init.clear();
	_dcont.clear();
	_lcont.clear();
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &other) 
{
	if (this == &other)
		return (*this);
	return (*this);
}

bool 	isStrPosInt(const std::string str)
{
	if (str.empty())
		return (false);
	for (int i = 0; str[i]; i++)
	{
		if (i > 9 || !isdigit(str[i]))
			return (false);
	}
	if (atol(str.c_str()) > INT_MAX)
		return (false);
	return (true);
}

void	 PmergeMe::_readInput(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		if (!isStrPosInt(av[i]))
			throw std::invalid_argument("Invalid arguments");
		_init.push_back(atoi(av[i]));
	}
}

void	 PmergeMe::_sortDQ(int ac, char **av)
{
	// get time

	// process data
	for (int i = 1; i < ac; i++)
		_dcont.push_back(atoi(av[i]));

	// sort

	// get time and save
}
void	 PmergeMe::_sortLST(int ac, char **av)
{

	// get time

	// process data
	for (int i = 1; i < ac; i++)
		_lcont.push_back(atoi(av[i]));

	// sort

	// get time and save

}

std::ostream	&operator<<(std::ostream &out, const PmergeMe &val)
{

}