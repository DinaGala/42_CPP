/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:49:06 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 15:49:23 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	std::cout << "IMateriaSource Default constructor called" << std::endl;
}

IMateriaSource::~IMateriaSource()
{
	std::cout << "IMateriaSource Default destructor called" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &other)
{
	std::cout << "IMateriaSource Copy constructor called" << std::endl;
	*this = other;
}

IMateriaSource	&IMateriaSource::operator=(const IMateriaSource &other) 
{
	std::cout << "IMateriaSource Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	// ASSIGNMENT HERE
	return (*this);
}

