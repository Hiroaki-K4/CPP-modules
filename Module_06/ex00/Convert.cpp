/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:08:30 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/22 18:07:02 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
}

Convert::Convert(const Convert &obj)
{
    *this = obj;
}

Convert &Convert::operator=(const Convert &obj)
{
    (void)obj;
    return (*this);
}

Convert::~Convert()
{
}

std::string Convert::decideInputType(const std::string input)
{
    std::string str = static_cast<std::string>(input);

    if (str == "-inff" || str == "+inff" || str == "nanf")
    {
        std::cout << "float" << std::endl;
        return ("float");
    }
    else if (str == "-inf" || str == "+inf" || str == "nan")
    {
        std::cout << "double" << std::endl;
        return ("double");
    }
    else if (str.length() > 3 && str[str.length() - 1] == 'f')
    {
        std::cout << "float" << std::endl;
        return ("float");
    }
    else if (str.length() > 2 && str.find(".") != std::string::npos)
    {
        std::cout << "double" << std::endl;
        return ("double");
    }
    else if (str.length() == 1)
    {
        char c = str[0];
        if (c >= '0' && c <= '9')
            return ("int");
        else if (c >= 32 && c <= 126)
            return ("char");
        else
            return ("not-displayable");
    }
    return ("int");
}

void Convert::display(char c)
{
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void Convert::display(int i)
{
    if (i < 0 || i > 127)
        std::cout << "char: impossible" << std::endl;
    else if (i < 32 || i > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(i) << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void Convert::display(float f)
{
    if (f < 0 || f > 127)
        std::cout << "char: impossible" << std::endl;
    else if (f < 32 || f > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(f) << std::endl;
    std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void Convert::display(double d)
{
    if (d < 0 || d > 127)
        std::cout << "char: impossible" << std::endl;
    else if (d < 32 || d > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(d) << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}
