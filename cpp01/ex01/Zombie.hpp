/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 19:31:07 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/05 22:17:45 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# define NZ 5

class Zombie
{
	public:
		Zombie();
		~Zombie();
		
		void	setName(std::string name);
		void	announce();
		
	private:
		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif