/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:11:41 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/14 17:40:10 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <list>
# include <set>

template <typename T>
int	easyfind(T &cont, int val)
{
	typename T::iterator	it = std::find(cont.begin(), cont.end(), val);

	if (it == cont.end())
		throw std::out_of_range("Value not found");
	return (std::distance(cont.begin(), it));
}

#endif
