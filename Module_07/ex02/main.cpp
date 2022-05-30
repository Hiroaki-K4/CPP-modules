/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:36:47 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/30 21:55:39 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{
    std::cout << "~~~No parameter test~~~" << std::endl;
    Array<std::string> test;
    try
    {
        for (int i = 0; i < static_cast<int>(test.size()); i++)
            std::cout << test[i] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "~~~String test~~~" << std::endl;
    Array<std::string> test1(3);
    try
    {
        test1[0] = "hello1";
        test1[1] = "hello2";
        test1[2] = "hello3";
        for (int i = 0; i < static_cast<int>(test1.size()) + 1; i++)
            std::cout << test1[i] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "~~~Int test~~~" << std::endl;
    Array<int> test2(3);
    try
    {
        test2[0] = 1;
        test2[1] = 2;
        test2[2] = 3;
        for (int i = 0; i < static_cast<int>(test2.size()); i++)
            std::cout << test2[i] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "~~~Assignment operator test~~~" << std::endl;
    Array<std::string> test3;
    test3 = test1;
    try
    {
        for (int i = 0; i < static_cast<int>(test3.size()); i++)
            std::cout << test3[i] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "~~~Copy test~~~" << std::endl;
    Array<int> test4(test2);
    try
    {
        for (int i = 0; i < static_cast<int>(test4.size()); i++)
            std::cout << test4[i] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
