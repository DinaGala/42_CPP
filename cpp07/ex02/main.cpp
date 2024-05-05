/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:25:44 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/05 18:18:27 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <ctime>
#include <cstdlib>

#define MAX_VAL 5

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

	std::cout << "\n-----------------------------\n" << "Initializing Numbers and Mirror" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
      	std::cout << "Numbers #" << i << " is " << numbers[i] << std::endl;
		std::cout << "Mirror #" << i << " is " << mirror[i] << std::endl;
	    const int value = rand();
        numbers[i] = value;
		std::cout << "Numbers #" << i << " is " << numbers[i] << std::endl;
        mirror[i] = value;
		std::cout << "Mirror #" << i << " is " << mirror[i] << std::endl << std::endl;
    }

	std::cout << "\n-----------------------------\n" << "Coping Numbers into Tmp and Test" << std::endl;
    //SCOPE
    {
        try
		{
			Array<int> tmp = numbers;
			std::cout << "Size of temp is " << tmp.size() << std::endl;
			std::cout << "Temp #" << MAX_VAL << " is " << tmp[MAX_VAL - 1] << std::endl;
			Array<int> test(tmp);
			tmp[MAX_VAL - 1] = 42;
			std::cout << "Now temp #" << MAX_VAL << " is " << tmp[MAX_VAL - 1] << std::endl;
			std::cout << "But test #" << MAX_VAL << " is " << test[MAX_VAL - 1] << std::endl;
		}
		catch (const std::exception& e)
		{
			 std::cerr << e.what() << '\n';
		}
    }

	std::cout << "\n-----------------------------\n" << "Checking if the values in Numbers and Mirror are the same" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
	    if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	std::cout << "ALL GOOD" << std::endl;

	std::cout << "\n-----------------------------\n" << "Trying index out of range" << std::endl;
    try
    {
		std::cout << "Index < 0:  " << std::endl;
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n\n";
    }
    try
    {
        std::cout << "Too big index:  " << std::endl;
		numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n\n";
    }

	Array<double>	zero(0);

    delete [] mirror;
    return 0;
}