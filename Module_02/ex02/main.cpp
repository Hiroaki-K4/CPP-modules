/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 22:13:52 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/24 22:13:52 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;

    std::cout << std::endl;
    std::cout << "Additional test" << std::endl;

    if (a > b)
        std::cout << "a is greater than b" << std::endl;
    if (a < b)
        std::cout << "a is less than b" << std::endl;
    if (a >= b)
        std::cout << "a is greater than or equal to b" << std::endl;
    if (a <= b)
        std::cout << "a is less than or equal to b " << std::endl;
    if (a == a)
        std::cout << "a is equal to a" << std::endl;
    if (a != b)
        std::cout << "a is not equal to b" << std::endl;

    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;

    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;

    Fixed c(3);
    std::cout << Fixed::min(a, b) << std::endl;
    std::cout << Fixed::max(a, c) << std::endl;
    std::cout << Fixed::min(a, c) << std::endl;

    return (0);
}
