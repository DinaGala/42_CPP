/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:10:44 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/06/10 18:28:19 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <list>
# include <deque>
# include <string>
# include <climits>
# include <ctime>
# include <cstdlib>


class PmergeMe
{
	public:
		
		~PmergeMe();
		PmergeMe(int ac, char **av);

		const std::deque<int>	getInit() const;
		const std::deque<int>	getDcont() const;
		std::list<int>			getLcont() const;
		double					getDtime() const;
		double					getLtime() const;

	private:
		std::deque<int>		_init;
		std::deque<int>		_dcont;
		std::list<int>		_lcont;
		double				_dtime;
		double				_ltime; 

		void				_readInput(int ac, char **av);
		void	 			_sortDQ(int ac, char **av);
		void	 			_sortLST(int ac, char **av);

		std::deque<int>		_dqMergeSort(std::deque<int> temp);
		std::deque<int>		_dqMerge(std::deque<int> left, std::deque<int> right);
		void				_dqInsertSort(int el);

		std::list<int>		_lstMergeSort(std::list<int> temp);
		std::list<int>		_lstMerge(std::list<int> left, std::list<int> right);
		void				_lstInsertSort(int el);

		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe& operator=(const PmergeMe &other);
};

std::ostream	&operator<<(std::ostream &out, const PmergeMe &val);
std::ostream	&operator<<(std::ostream &out, const std::deque<int> &val);
void	printList(std::list<int> val);

#endif
