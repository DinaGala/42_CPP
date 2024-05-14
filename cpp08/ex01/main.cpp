/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:47:33 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/14 18:02:25 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(int, char **)
{
    Span	sp = Span(5);

	std::cout << "\nBASIC TESTS:\nTrying to add 6 values to the 5 value span:" << std::endl;
	try
	{
		sp.addNumber(-6);
		sp.addNumber(-2147483648);
		sp.addNumber(17);
		sp.addNumber(2147483647);
		sp.addNumber(11);
		sp.addNumber(1199);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
	std::cout << "The values in the span are: " << sp << std::endl;
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	std::cout << "_____________________________________\n" << std::endl;

	std::cout << "\nADVANCED TEST:\nTrying to add an array of 7 values to the 100 000 value span:" << std::endl;
	Span 	sp1 = Span(100000);
	int		arr[7] = {3, -9, -88, 9, 54, 54, 77};
	sp1.addNumbers(arr, 7);
	std::cout << "The values in the span are: " << sp1 << std::endl;
	std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp1.longestSpan() << std::endl;

	Span	sp2(sp1);
	std::cout << "\nCopied the span. The values in the new span are: " << sp2 << std::endl;
	std::cout << "\nTrying to add a range of values from -100 000 to 1 000 000 to the 100 000 value span:" << std::endl;
	sp2.addNumbers(-100000,  1000000, 2);
	std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp2.longestSpan() << std::endl;

	std::cout << "_____________________________________\n" << std::endl;
	
	return (0);
}

