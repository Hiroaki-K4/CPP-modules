/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:24:52 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/15 17:28:21 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Convert.hpp"

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        std::cout << "Hello " << argv[1] << std::endl;
        Convert input(argv[1]);
    }
    else
    {
        std::cout << "One argument is required." << std::endl;
    }

    return (0);
}
