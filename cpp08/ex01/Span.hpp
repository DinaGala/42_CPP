/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:38:18 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/09 19:33:26 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <climits>
# include <numeric>

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
		int		shortestSpan();
		int		longestSpan();

		std::vector<int>	getCont() const;
		unsigned int		getN() const;

	private:
		unsigned int		_n;
		std::vector<int>	_cont;
    
};

std::ostream	&operator<<(std::ostream &out, const Span &sp);

#endif
