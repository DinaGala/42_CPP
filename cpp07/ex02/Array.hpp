/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:21:18 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/05 17:38:01 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template <typename T>
class Array
{
	public:
		Array();
		~Array();
		Array(unsigned int size);
		Array(const Array &other);
		Array& operator=(const Array &other);

		T& operator[](unsigned int index) const;
		unsigned int	size() const;

	private:
		T				*_arr;
		unsigned int	_n;
    
};

# include "Array.tpp"

#endif
