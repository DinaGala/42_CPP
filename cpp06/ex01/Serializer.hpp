/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:40:02 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/03 14:45:44 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

# include <iostream>

typedef struct sdata
{
	int		category;
	double	height;
	char	sex;
}	Data;

class Serializer
{
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

	private:
		Serializer();
		~Serializer();
		// Serializer(std::string const &type);
		Serializer(const Serializer &other);
		Serializer& operator=(const Serializer &other);
};

std::ostream	&operator<<(std::ostream &out, const Data &data); 

#endif
