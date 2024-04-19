/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:10:40 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/19 20:03:05 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal &other);
		AAnimal& operator=(const AAnimal &other);

		AAnimal(std::string const &type);

		virtual void	makeSound() const = 0;
		std::string		getType() const;
		void			setType(std::string type);

	protected:
		std::string _type;
		
    
};

#endif
