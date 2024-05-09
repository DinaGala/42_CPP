/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:03:26 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/09 21:10:17 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		~MutantStack();
		// MutantStack(std::string const &type);
		MutantStack(const MutantStack &other);
		MutantStack& operator=(const MutantStack &other);

	private:
		std::stack<T>	_cont;
};

# include "MutantStack.tpp"

#endif
