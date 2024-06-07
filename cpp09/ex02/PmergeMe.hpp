/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:10:44 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/06/07 21:26:07 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <list>
# include <deque>
# include <string>
# include <climits>


class PmergeMe
{
	public:
		
		~PmergeMe();
		PmergeMe(int ac, char **av);


		const std::deque<int>	getInit() const;
		const std::deque<int>	getDcont() const;
		const std::list<int>	getLcont() const;
		const int	getDtime() const;
		const int	getLtime() const;

	private:
		std::deque<int>		_init;
		std::deque<int>		_dcont;
		std::list<int>		_lcont;
		int					_dtime;
		int					_ltime;

		void				_readInput(int ac, char **av);
		void	 			_sortDQ(int ac, char **av);
		void	 			_sortLST(int ac, char **av);

		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe& operator=(const PmergeMe &other);
};

std::ostream	&operator<<(std::ostream &out, const PmergeMe &val);

#endif
