/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 21:30:55 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/04/07 22:38:38 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	print_err(std::string msg, std::ifstream &infile)
{
	std::cerr << msg << std::endl;
	infile.close();
	return (1);
}

int	print_err(std::string msg)
{
	std::cerr << msg << std::endl;
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (print_err("Error: introduce 3 arguments"));
	
	std::string name = argv[1];
	std::string str1 = argv[2];
	std::string str2 = argv[3];
	std::string buf;

	if(str1.empty())
		return(print_err("Error: the string to find cannot be empty"));

	std::ifstream	infile(name);
	if (!infile.is_open())
		return (print_err("Error: infile crush"));
	std::getline(infile, buf, '\0');
	if (buf.empty())
		return (print_err("Error: the input file is empty", infile));

	std::ofstream	outfile(name.append(".replace"), std::ios_base::out);
	if (!outfile.is_open())
		return (print_err("Error: outfile crush", infile));
		
	for (size_t	pos = buf.find(str1); pos != std::string::npos; pos = buf.find(str1, pos + str2.length()))
	{
		buf.erase(pos, str1.length());
		buf.insert(pos, str2);
	}
	outfile << buf;
	infile.close();
	outfile.close();
	return (0);
}