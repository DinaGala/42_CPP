/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:11:41 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/08 20:29:27 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>

template <typename T>
int	easyfind(T &cont, int val)
{
	std::vector<int>::iterator	it = std::find(cont.begin(), cont.end(), val);

	if (it == cont.end())
		throw std::out_of_range("Value not found");
	return (std::distance(cont.begin(), it));
}

#endif
