/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:52:57 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/03 21:38:47 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T arr[], int size, void (*func)(T &))
{
	if (!arr)
		return ;
	for (int i = 0; i < size; i++)
		func(arr[i]);
}

template <typename T>
void	printT(T &data)
{
	std::cout << data << std::endl;
}

#endif
