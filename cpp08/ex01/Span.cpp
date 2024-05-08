/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:22:22 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/08 22:29:05 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _n(0)
{
//	std::cout << "Span Default constructor called" << std::endl;
}

Span::Span(unsigned int lim): _n(lim)
{
	std::cout << "Span constructor called" << std::endl;
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
	std::copy(other._cont.begin(), other._cont.begin() + _n, std::back_inserter(_cont));
	// for (int i = 0; i < _n; i++)
	// 	_cont.push_back(other._cont[i]);
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
		std::for_each(num, num + size, [this](int x) { addNumber(x); });
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
		for (; start < end; start += pace)
			addNumber(start);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int		Span::longestSpan()
{
	if (_cont.size() < 2)
		throw std::length_error("Not enough elements");
	return (std::max_element(_cont.begin(), _cont.end()) - std::min_element(_cont.begin(), _cont.end()));
}
