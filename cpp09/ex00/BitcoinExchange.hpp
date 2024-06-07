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
# include <cmath>
# include <ctime>
# include <limits>
# include <utility>
# include <cfloat>
# include <cstdlib>
# include <stdexcept>
# include <algorithm>

typedef struct s_dt
{
	int	year;
	int	total;
} t_dt;

class BitcoinExchange
{
	private:
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange& operator=(const BitcoinExchange &other);

		std::map<t_dt, double>	_data;
		
		void		_saveCSV();
		void		_readLine(std::string &line);
		void		_firstLine(const std::string &line);
		t_dt		_saveDate(const std::string &str);
		double 		_sToF(const std::string& str);
		std::string	_checkDate(std::string& str);
		void		_checkYmd(int year, int mth, int day);
		double		_getVal(const std::string &date);

	public:
		BitcoinExchange();
		~BitcoinExchange();
		void	btc(char *file);
};

#endif
