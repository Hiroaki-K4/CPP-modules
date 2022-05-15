/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:08:30 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/15 22:34:24 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
}

Convert::Convert(const char *input)
{
    this->type = Convert::decideInputType(input);
}

Convert::Convert(const Convert &obj)
{
    this->type = obj.type;
}

Convert &Convert::operator=(const Convert &obj)
{
    this->type = obj.type;
    return (*this);
}

Convert::~Convert()
{
}

char Convert::getType()
{
    return (this->type);
}

char Convert::decideInputType(const char *input)
{
    std::cout << "decideInputType: " << input << std::endl;
    std::string str = static_cast<std::string>(input);
    std::cout << "cast: " << str[0] << std::endl;
    // TODO: Add process to decide input type 
    // if ()
    
    char cast_c = input[0];
    int cast_i = atoi(input);
    float cast_f = atof(input);
    // double cast_d = static_cast<double>(std::stod(input));
    std::cout << "cast_c: " << cast_c << std::endl;
    std::cout << "cast_i: " << cast_i << std::endl;
    std::cout << "cast_f: " << cast_f << std::endl;
    // std::cout << "cast_d: " << cast_d << std::endl;
    
    return ('c');
}
