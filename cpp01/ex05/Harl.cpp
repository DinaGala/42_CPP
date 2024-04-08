/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:30:51 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/08 18:00:48 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain( std::string level )
{
	std::string lev[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*funcs[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int			i = -1;

	while (++i < 4)
	{
		if (level == lev[i])
		{
			(this->*funcs[i])();
			break; 
		}
	}
	if (i == 4)
		std::cout << "Error: the introduced level doesn't exist." << std::endl;

}

void	Harl::_debug( void )
{
	std::cout << " [DEBUG] I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::_info( void )
{
	std::cout << " [INFO] I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << " [WARNING] I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error( void )
{
	std::cout << " [ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

