/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:09:15 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/22 17:55:29 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <iomanip>

class Convert
{
    public:
        Convert();
        Convert(const Convert &obj);
        Convert &operator=(const Convert &obj);
        ~Convert();
        std::string decideInputType(const std::string input);
        void display(char c);
        void display(int i);
        void display(float f);
        void display(double d);
};

#endif
