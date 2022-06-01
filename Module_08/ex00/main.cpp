/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:57:48 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/31 23:06:20 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
    std::cout << "~~~Test~~~" << std::endl;
    std::vector<int> test1;
    test1.push_back(0);
    test1.push_back(1);
    test1.push_back(2);
    try
    {
        std::cout << *easyfind(test1, 2) << std::endl;
        std::cout << *easyfind(test1, 3) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "We can't find!" << std::endl;
    }

    return (0);
}
