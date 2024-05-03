/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:36:02 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/03 18:24:53 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cfloat>
# include <climits>
# include <cstdlib>
# include <stdexcept>
# include <cmath>
//# define DBL_MAX std::numeric_limits<double>::max()
//# define DBL_MIN std::numeric_limits<double>::min()

enum	input
{
	CHAR,
	INT,
	FLT,
	DBL
};

class ScalarConverter
{
	public:
		static void	convert( const std::string & value );
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter& operator=(const ScalarConverter &other);

};

class Input: public std::exception
{
	public:
		const char	*what() const throw();
};


#endif
