/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:48:21 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/03 19:07:47 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"


int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	A	a;
	Base *ran = generate();
	B	b;
	Base &b2 = b;

	identify(b2);
	identify(&a);
		std::cout << std::endl;
	identify(ran);
	identify(*ran);

	delete ran;
	return (0);
}

