/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:15:45 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 21:19:24 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("Noname")
{
//	std::cout << "Character Default constructor called" << std::endl;
	for (int i = 0; i < N; i++)
		_slots[i] = NULL;
}

Character::Character(std::string const &name): _name(name)
{
//	std::cout << "Character Name constructor called" << std::endl;
	for (int i = 0; i < N; i++)
		_slots[i] = NULL;
}

Character::~Character()
{
	std::cout << "Character " << _name << " Default destructor called" << std::endl;
	for (int i = 0; i < N; i++)
	{
		if (_checkDups(i) == true)
		{
			delete _slots[i];
			_slots[i] = nullptr;
		}
	}
}

bool Character::_checkDups(int idx)
{
	if (idx < 0 || idx > N - 1 || !_slots[idx])
		return (false);
	for (int i = idx + 1; i < N; i++)
	{
		if (_slots[i] == _slots[idx])
			_slots[i] = nullptr;
	}
	return (true);
}

Character::Character(const Character &other)
{
//	std::cout << "Character Copy constructor called" << std::endl;
	for (int i = 0; i < N; i++)
		_slots[i] = NULL;
	*this = other;
}

Character	&Character::operator=(const Character &other) 
{
//	std::cout << "Character Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	for (int i = 0; i < N; i++)
	{
		if (_checkDups(i) == true)
			delete _slots[i];
		if (!other._slots[i])
			_slots[i] = nullptr;
		else
			_slots[i] = other._slots[i]->clone();
	}
	_name = other._name;
	return (*this);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	
	if (!m)
	{
		std::cout << "Character " << _name << " cannot equip an undefined Materia." << std::endl;
		return ;
	}
	while (_slots[i] && i < N)
		i++;
	if (i > N - 1)
	{
		std::cout << "Character " << _name << " cannot equip the Materia " << m->getType() << ", the storage is full." << std::endl;
		return ;
	}
	_slots[i] = m;
	std::cout << "Character named " << _name << " is equiping a Materia " << m->getType() << " in a slot " << i << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > N - 1)
		std::cout << "Character " << _name << " cannot unequip, does not have such a place in the inventory." << std::endl;
	else if (!_slots[idx])
		std::cout << "Character " << _name << " cannot unequip an undefined Materia." << std::endl;
	else
	{
		std::cout << "Character named " << _name << " is equiping a Materia " << _slots[idx]->getType() << " in a slot " << idx << ". DON'T FORGET TO DELETE IT!" << std::endl;
		_slots[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > N - 1)
		std::cout << "Character " << _name << " cannot use a Materia, does not have such a place in the inventory." << std::endl;
	else if (!_slots[idx])
		std::cout << "Character " << _name << " cannot use an undefined Materia." << std::endl;
	else
		_slots[idx]->use(target);

}

std::string const &Character::getName() const
{
	return (_name);
}

void	Character::printChar()
{
	for (int i = 0; i < N; i++)
	{
		if (!_slots[i])
			std::cout << "Character " << _name << " in the index " << i << " does not have any Materia. " << std::endl;
		else
			std::cout << "Character " << _name << " in the index " << i << " has a Materia of type " << _slots[i]->getType() << ", slot ptr is " << _slots[i] << std::endl;
	}
}