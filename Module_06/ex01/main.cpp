/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:24:52 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/24 21:54:51 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serialization.hpp"

int main(void)
{
    Data *test = new Data;
    test->name = "test";
    test->age = 42;
    std::cout << "[Before] name: " << test->name << " age: " << test->age << std::endl;

    uintptr_t uint_test = serialize(test);
    Data *after_conversion = deserialize(uint_test);
    std::cout << "[After] name: " << after_conversion->name << " age: " << after_conversion->age << std::endl;

    return (0);
}
