/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:36:47 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/29 17:29:00 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{
    Array<std::string> test1(3);
    std::cout << "~~~String test~~~" << std::endl;
    try
    {
        test1[0] = "hello1";
        test1[1] = "hello2";
        test1[2] = "hello3";
        for (int i = 0; i < 4; i++)
            std::cout << test1[i] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    Array<int *> test2(3);
    std::cout << std::endl;
    std::cout << "~~~Int test~~~" << std::endl;
    try
    {
        test1[0] = 1;
        test1[1] = 2;
        test1[2] = 3;
        for (int i = 0; i < 4; i++)
            std::cout << test1[i] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
