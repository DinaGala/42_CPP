/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:30:51 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/08 18:31:01 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain( std::string level )
{
	std::string lev[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = -1;

	while (++i < 4)
	{
		if (level == lev[i])
			break; 
	}
	switch (i)
	{
		case 0: _debug(); std::cout <<std::endl;
		case 1: _info(); std::cout <<std::endl;
		case 2: _warning(); std::cout <<std::endl;
		case 3: _error(); std::cout <<std::endl; break;
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::_debug( void )
{
	std::cout << "[ DEBUG ] \nI love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::_info( void )
{
	std::cout << "[ INFO ] \nI cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "[ WARNING ] \nI think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error( void )
{
	std::cout << "[ ERROR ] \nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

