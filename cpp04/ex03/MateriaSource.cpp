/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:28:00 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 19:13:41 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default constructor called" << std::endl;
	for (int i = 0; i < N; i++)
		_library[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Default destructor called" << std::endl;
	for (int i = 0; i < N; i++)
	{
		if (_checkDups(i) == true)
			delete _library[i];
	}
}

bool MateriaSource::_checkDups(int idx)
{
	if (idx < 0 || idx > N - 1 || !_library[idx])
		return (false);
	for (int i = idx + 1; i < N; i++)
	{
		if (_library[i] == _library[idx])
			_library[i] = nullptr;
	}
	return (true);
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	for (int i = 0; i < N; i++)
		_library[i] = NULL;
	*this = other;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other) 
{
	std::cout << "MateriaSource Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	for (int i = 0; i < N; i++)
	{
		if (_checkDups(i) == true)
			delete _library[i];
		if (!other._library[i])
			_library[i] = nullptr;
		else
			_library[i] = other._library[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
	{
		std::cout << "An undefined Materia cannot be learned." << std::endl;
		return ;
	}
	for (int i = 0; i < N; i++)
	{
		if (!_library[i])
		{
			_library[i] = m->clone();
			std::cout << "A Materia " << m->getType() << " is stored in a MateriaSource library in a slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "A Materia " << m->getType() << " cannot be stored in a MateriaSource library, the library is full." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < N; i++)
	{
		if (_library[i] && _library[i]->getType() == type)
			return (_library[i]->clone());
	}
	std::cout << "We don't have such a Materia in our library." << std::endl;
	return (nullptr);

}
