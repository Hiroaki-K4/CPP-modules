/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:24:52 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/22 17:54:31 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Convert.hpp"

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        std::string input = static_cast<std::string>(argv[1]);
        Convert test;
        std::string type = test.decideInputType(input);
        if (type == "char")
        {
            test.display(argv[1][0]);
        }
        else if (type == "int")
        {
            test.display(atoi(argv[1]));
        }
        else if (type == "float")
        {
            test.display(static_cast<float>(atof(argv[1])));
        }
        else if (type == "double")
        {
            test.display(atof(argv[1]));
        }
        std::cout << type << std::endl;
    }
    else
    {
        std::cout << "One argument is required." << std::endl;
    }

    return (0);
}
