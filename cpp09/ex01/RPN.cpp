/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:03:25 by nzhuzhle          #+#    #+#             */
/*   Updated: 2024/06/07 18:52:20 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void    calculate(std::stack<int> &nums, size_t pos)
{
    if (nums.size() < 2)
        throw std::invalid_argument("Not enough arguments to execute the operation");
    
    int n1 = nums.top();
    nums.pop();
    int n2 = nums.top();
    nums.pop();
    switch (pos)
    {
        case 0: nums.push(n2 + n1); break ;
        case 1: nums.push(n2 - n1); break ;
        case 2: nums.push(n2 * n1); break ;
        case 3: {
            if (n1 == 0)
                throw std::invalid_argument("Division by 0 is impossible");
            nums.push(n2 / n1);
            break ;
        }
        default: throw std::invalid_argument("Unknown operator");
    }
}

void    rpn(const std::string &str)
{
    std::istringstream iss(str);
    std::string         line;
    std::stack<int>     nums;
    std::string         signs = "+-*/";

    while (getline(iss, line, ' '))
    {
        if (line.empty())
            continue ;
        if (line.length() != 1)
            throw std::invalid_argument("Invalid argument");
        if (signs.find(line[0]) != std::string::npos)
            calculate(nums, signs.find(line[0]));
        else if (std::isdigit(line[0]))
            nums.push(atoi(line.c_str()));
        else
            throw std::invalid_argument("Invalid argument");
    }
    if (iss.bad() || !iss.eof())
        throw std::invalid_argument("Invalid argument");
    if (nums.size() != 1)
        throw std::invalid_argument("Invalid argument");
    std::cout << nums.top() << std::endl;
}