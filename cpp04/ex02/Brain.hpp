/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:18:09 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/21 15:18:12 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# define N 100

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain &other);
		Brain& operator=(const Brain &other);

		void	setIdeas(std::string const idea);
		void	printIdea(int index) const;

	private:
		std::string	_ideas[N];
    
};

#endif
