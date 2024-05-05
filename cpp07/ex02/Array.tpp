/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:31:09 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/05 18:01:32 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _arr(NULL), _n(0)
{
//	std::cout << "Array Default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int size): _n(size)
{
//	std::cout << "Array Name costructor called" << std::endl;
	if (_n)
		_arr = new T[_n];
}

template <typename T>
Array<T>::~Array()
{
//	std::cout << "Array Default destructor called" << std::endl;
	if (_arr && _n)
		delete [] _arr;
}

template <typename T>
Array<T>::Array(const Array<T> &other): _arr(NULL), _n(0)
{
//	std::cout << "Array Copy constructor called" << std::endl;
	*this = other;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &other) 
{
//	std::cout << "Array Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	if (_arr && _n)
		delete [] _arr;
	_arr = NULL;
	_n = other._n;
	if (_n)
		_arr = new T[_n];
	for (unsigned int i = 0; i < _n; i++)
		_arr[i] = other._arr[i];
	return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int index) const
{
	if (!_arr || !_n || _n <= index)
		throw std::out_of_range("Index is out of range");
	return (_arr[index]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (_n);
}
