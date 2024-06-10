/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:56:35 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/06/10 17:22:57 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac < 2)
            throw std::invalid_argument("Invalid number of arguments");
        PmergeMe    mysort(ac, av);
        std::cout << mysort;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }  
    return (0);
}