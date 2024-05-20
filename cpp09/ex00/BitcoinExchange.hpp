/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:49:58 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/05/20 23:07:58 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <string>
# include <sstream>
# include <cmath>
# include <climits>
# include <cfloat>
# include <cstdlib>
# include <stdexcept>
# include <algorithm>

class BitcoinExchange
{
	private:
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange& operator=(const BitcoinExchange &other);

		std::map<std::string, double>	_data;
		
		void							_saveCSV();
		void							_readLine();
	//	std::map<std::string, double>	_getLine();
		double							_getVal(const std::string &date) const;
		double 							_sToF(const std::string& str);
//		void	_checkDate(const std::string& str);

	public:
		BitcoinExchange();
		~BitcoinExchange();
		void	btc(std::string file);
};

#endif
