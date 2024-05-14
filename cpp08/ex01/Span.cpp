/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:22:22 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/14 18:01:42 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _n(0)
{
//	std::cout << "Span Default constructor called" << std::endl;
}

Span::Span(unsigned int lim): _n(lim)
{
//	std::cout << "Span constructor called" << std::endl;
}

Span::~Span()
{
//	std::cout << "Span Default destructor called" << std::endl;
}

Span::Span(const Span &other)
{
//	std::cout << "Span Copy constructor called" << std::endl;
	*this = other;
}

Span	&Span::operator=(const Span &other) 
{
//	std::cout << "Span Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	_n = other._n;
	_cont.clear();
	std::copy(other._cont.begin(), other._cont.end(), std::back_inserter(_cont));
	return (*this);
}

void	Span::addNumber(int num)
{
	if (_cont.size() < _n)
		_cont.push_back(num);
	else
		throw std::length_error("Can't be added, container is full");
}

void	Span::addNumbers(int num[], int size)
{
	try
	{
		for (int i = 0; i < size; i++)
			addNumber(num[i]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	Span::addNumbers(int start, int end, int pace)
{
	try
	{
		for (int i = start; i < end; i += pace)
			addNumber(i);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

long long		Span::longestSpan()
{
	if (_cont.size() < 2)
		throw std::length_error("Not enough elements");
	return ((long long)*(std::max_element(_cont.begin(), _cont.end())) - (long long)*(std::min_element(_cont.begin(), _cont.end())));
}

long long		Span::shortestSpan()
{
	std::vector<long long>	sorted(_cont.size());	
	std::vector<long long>	diff(_cont.size());
	if (_cont.size() < 2)
		throw std::length_error("Not enough elements");
	std::copy(_cont.begin(), _cont.end(), sorted.begin());
	std::sort(sorted.begin(), sorted.end());
	std::adjacent_difference(sorted.begin(), sorted.end(), diff.begin());
	
	return ((long long)*(std::min_element(diff.begin() + 1, diff.end())));
}

std::vector<int>	Span::getCont() const
{
	return (_cont);
}

unsigned int	Span::getN() const
{
	return (_n);
}

std::ostream	&operator<<(std::ostream &out, const Span &sp)
{
	std::vector<int>	copy = sp.getCont();

	out << "{ ";
	for (std::vector<int>::iterator it = copy.begin(); it != copy.end(); it++)
		out << *it << " ";
	out << "}, size is: " << sp.getN();
	return (out);
}