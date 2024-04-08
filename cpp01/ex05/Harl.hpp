/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:09:10 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/08 17:15:36 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	public:
		
		Harl();
		~Harl();

		void complain( std::string level );

	private:
		
		void _debug( void );
		void _info( void );
		void _warning( void );
		void _error( void );
};

#endif