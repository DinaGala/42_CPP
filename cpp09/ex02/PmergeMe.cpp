/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 21:27:19 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/06/10 18:32:04 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	clock_t	start = clock();

	std::deque<int>	input;
	for (int i = 1; i < ac; i++)
		input.push_back(atoi(av[i]));
	
	int	len = input.size();
	for (int i = 0; i < len / 2; i++)
	{	
		if (input[i * 2] > input[i * 2 + 1])
			std::swap(input[i * 2], input[i * 2 + 1]);
	}

	std::deque<int>	aux;
	for (int i = 0; i < len / 2; i++)
	{	
		_dcont.push_back(input[i * 2]);
		aux.push_back(input[i * 2 + 1]);
	}
	_dcont = _dqMergeSort(_dcont);
	for (unsigned int i = 0; i < aux.size(); i++)
		_dqInsertSort(aux[i]);
	if (len % 2 > 0)
		_dqInsertSort(input.back());

	clock_t	end = clock();
	_dtime = double(end - start) / CLOCKS_PER_SEC * 1000; 
	aux.clear();
	input.clear();
}

std::deque<int>	PmergeMe::_dqMergeSort(std::deque<int> temp)
{
	if (temp.size() <= 1)
		return (temp);
	
	std::deque<int>::iterator	mid = temp.begin() + temp.size() / 2;
	std::deque<int> first(temp.begin(), mid);
	std::deque<int> left = _dqMergeSort(first);
	std::deque<int> second(mid, temp.end());
	std::deque<int> right = _dqMergeSort(second);
	return (_dqMerge(left, right));
}

std::deque<int>	PmergeMe::_dqMerge(std::deque<int> left, std::deque<int> right)
{
	std::deque<int>	result;
	while (left.size() > 0 || right.size() > 0)
	{
		if (left.size() > 0 && (right.size() == 0 || left[0] < right[0]))
		{
			result.push_back(left[0]);
			left.pop_front();
		}
		else
		{
			result.push_back(right[0]);
			right.pop_front();
		}
	}
	return (result);
}

void	PmergeMe::_dqInsertSort(int el)
{
	for (std::deque<int>::iterator it = _dcont.begin(); it != _dcont.end(); it++)
	{
		if (el < (*it))
		{
			_dcont.insert(it, el);
			return ;
		}
	}
	_dcont.push_back(el);
}


void	 PmergeMe::_sortLST(int ac, char **av)
{
	clock_t	start = clock();

	std::list<int>	input;
	for (int i = 1; i < ac; i++)
		input.push_back(atoi(av[i]));
	int	len = input.size();
	std::list<int>	paired;
	for (std::list<int>::iterator it = input.begin(); it != input.end(); it++)
	{	
		int	el = (*it);
		it++;
		if (it == input.end())
			break ;
		if ((*it) > el)
		{
			paired.push_back(el);
			paired.push_back(*it);
		}
		else
		{
			paired.push_back(*it);
			paired.push_back(el);
		}
	}
	std::list<int>	aux;
	for (std::list<int>::iterator it = paired.begin(); it != paired.end(); it++)
	{	
		_lcont.push_back(*it);
		it++;
		aux.push_back(*it);
	}
	_lcont = _lstMergeSort(_lcont);
	for (std::list<int>::iterator it = aux.begin(); it != aux.end(); it++)
		_lstInsertSort(*it);
	if (len % 2 > 0)
		_lstInsertSort(input.back());

	clock_t	end = clock();
	_ltime = double(end - start) / CLOCKS_PER_SEC * 1000;
	aux.clear();
	input.clear();
	paired.clear();
	// printList(_lcont);
	// std::cout << '\n';
}

std::list<int>	PmergeMe::_lstMergeSort(std::list<int> temp)
{
	if (temp.size() <= 1)
		return (temp);
	
	std::list<int>::iterator	mid = temp.begin();
	std::advance(mid, temp.size() / 2);
	std::list<int> first(temp.begin(), mid);
	std::list<int> left = _lstMergeSort(first);
	std::list<int> second(mid, temp.end());
	std::list<int> right = _lstMergeSort(second);
	return (_lstMerge(left, right));
}

std::list<int>	PmergeMe::_lstMerge(std::list<int> left, std::list<int> right)
{
	std::list<int>	result;
	while (left.size() > 0 || right.size() > 0)
	{
		if (left.size() > 0 && (right.size() == 0 || left.front() < right.front()))
		{
			result.push_back(left.front());
			left.pop_front();
		}
		else
		{
			result.push_back(right.front());
			right.pop_front();
		}
	}
	return (result);
}

void	PmergeMe::_lstInsertSort(int el)
{
	for (std::list<int>::iterator it = _lcont.begin(); it != _lcont.end(); it++)
	{
		if (el < (*it))
		{
			_lcont.insert(it, el);
			return ;
		}
	}
	_lcont.push_back(el);
}

void	printList(std::list<int> val)
{
	for (std::list<int>::iterator it = val.begin(); it != val.end(); it++)
		std::cout << (*it) << " ";
}

std::ostream	&operator<<(std::ostream &out, const PmergeMe &val)
{
	out << "Before: " << val.getInit() << std::endl;
	out << "After: " << val.getDcont() << std::endl;
	out << "Time to process a range of " << val.getDcont().size() << " elements with std::deque : " << val.getDtime()  << " us" << std::endl;
	out << "Time to process a range of " << val.getLcont().size() << " elements with std::list : " << val.getLtime()  << " us" << std::endl;
	return (out);
//	out << "List After: ";
//	printList(val.getLcont());
}

std::ostream	&operator<<(std::ostream &out, const std::deque<int> &val)
{
	for (unsigned int i = 0; i < val.size(); i++)
		out << val[i] << " ";
	return (out);
}

const std::deque<int>	PmergeMe::getInit() const
{
	return (_init);
}

const std::deque<int>	PmergeMe::getDcont() const
{
	return (_dcont);
}

double	PmergeMe::getDtime() const
{
	return (_dtime);
}

std::list<int>	PmergeMe::getLcont() const
{
	return (_lcont);
}

double	PmergeMe::getLtime() const
{
	return (_ltime);
}