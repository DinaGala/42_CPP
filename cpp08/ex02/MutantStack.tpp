/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:01:51 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/10 19:38:08 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>() {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &other): std::stack<T>(other) {}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &other) 
{
	if (this == &other)
		return (*this);
	std::stack<T>::operator=(other);
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator		MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator		MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::const_iterator		MutantStack<T>::cbegin()
{
	return (this->c.cbegin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator		MutantStack<T>::crbegin()
{
	return (this->c.crbegin());
}

template <typename T>
typename MutantStack<T>::iterator		MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator		MutantStack<T>::rend()
{
	return (this->c.rend());
}

template <typename T>
typename MutantStack<T>::const_iterator		MutantStack<T>::cend()
{
	return (this->c.cend());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator		MutantStack<T>::crend()
{
	return (this->c.crend());
}