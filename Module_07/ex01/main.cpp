/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:36:47 by hkubo             #+#    #+#             */
/*   Updated: 2022/06/05 14:50:30 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main(void)
{
    std::cout << "~~~Test string array~~~" << std::endl;
    std::string str[3] = {"str1", "str2", "str3"};
    iter(str, sizeof(str)/sizeof(*str), output);
    std::cout << std::endl;

    std::cout << "~~~Test int array~~~" << std::endl;
    int num[3] = {1, 2, 3};
    iter(num, sizeof(num)/sizeof(*num), output);

    return (0);
}
