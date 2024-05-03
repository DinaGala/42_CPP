/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:53:12 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/03 14:51:29 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	Data *dina = new Data;
	dina->category = 50;
	dina->height = 165.5;
	dina->sex = 'F';

	Data *sasha = new Data;
	sasha->category = 65;
	sasha->height = 172;
	sasha->sex = 'M';

	uintptr_t my = 24;
	uintptr_t afterser = Serializer::serialize(sasha);
	uintptr_t otheafter = Serializer::serialize(sasha);
	Data *afterde = Serializer::deserialize(afterser);
	Data *myData =  Serializer::deserialize(my);

	std::cout << "Dina: " << *dina << ", pointer: " << dina << std::endl;
	std::cout << "Dina after reinterpret cast: " << Serializer::serialize(dina) << std::endl;
	std::cout << "Sasha: " << *sasha << ", pointer: " << sasha << std::endl;
	std::cout << "Uint sasha: " << afterser << ", Deserialized uint sasha: " << *afterde << ", pointer: " << afterde << std::endl;
	std::cout << "Other Serialized uint sasha: " << otheafter << std::endl;
	std::cout << "My uint: " << my << ", Deserialized: " << myData << std::endl;
	std::cout << std::endl;

	delete dina;
	delete sasha;
	
	return (0);
}

