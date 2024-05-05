/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:52:57 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/05 18:31:05 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T arr[], unsigned int size, void (*func)(T &))
{
	if (!arr)
		return ;
	for (unsigned int i = 0; i < size; i++)
		func(arr[i]);
}

template <typename T>
void	printT(T &data)
{
	std::cout << data << std::endl;
}

#endif
