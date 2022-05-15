/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:09:15 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/15 22:19:10 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

class Convert
{
    private:
        char type;
    public:
        Convert();
        Convert(const char *input);
        Convert(const Convert &obj);
        Convert &operator=(const Convert &obj);
        ~Convert();
        char getType();
        char decideInputType(const char *input);
};

#endif
