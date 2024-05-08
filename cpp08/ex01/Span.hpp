/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:38:18 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/08 22:08:52 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	public:
		Span();
		~Span();
		Span(unsigned int lim);
		Span(const Span &other);
		Span& operator=(const Span &other);

		void	addNumber(int num);
		void	addNumbers(int arr[], int size);
		void	addNumbers(int start, int end, int pace);
	//	int		shortestSpan();
		int		longestSpan();

	private:
		unsigned int		_n;
		std::vector<int>	_cont;
    
};

#endif
