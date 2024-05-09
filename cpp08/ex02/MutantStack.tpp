/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:01:51 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/09 21:11:04 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
//	std::cout << "MutantStack Default constructor called" << std::endl;
}

//template <typename T>
//MutantStack<T>::MutantStack(std::string const &type): _type(type)
//{
//	std::cout << "MutantStack Name constructor called" << std::endl;
//}

template <typename T>
MutantStack<T>::~MutantStack()
{
//	std::cout << "MutantStack Default destructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &other)
{
//	std::cout << "MutantStack Copy constructor called" << std::endl;
	*this = other;
}

template <typename T>
MutantStack<T>	&MutantStack::operator=(const MutantStack<T> &other) 
{
//	std::cout << "MutantStack Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	// ASSIGNMENT HERE
	return (*this);
}

