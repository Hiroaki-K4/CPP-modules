/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:57:48 by hkubo             #+#    #+#             */
/*   Updated: 2022/06/02 22:41:26 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "~~~Basic test~~~" << std::endl;
        std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
        std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
        std::cout << std::endl;

        std::cout << "~~~Too many number test~~~" << std::endl;
        sp.addNumber(11);
    }
    catch (std::exception &e)
    {
        std::cout << "An error has occurred!" << std::endl;
    }

    try
    {
        std::cout << std::endl;
        Span sp2 = Span(5);
        sp2.addNumber(6);
        std::cout << "~~~Too few number test~~~" << std::endl;
        std::cout << "shortestSpan: " << sp2.shortestSpan() << std::endl;
        std::cout << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "An error has occurred!" << std::endl;
    }

    try
    {
        std::cout << std::endl;
        Span sp3 = Span(10000);
        std::vector<int> vec;
        for (int i = 0; i < 10000; i++)
            vec.push_back(i);
        sp3.addNumber(vec.begin(), vec.end());
        std::cout << "~~~Many number test~~~" << std::endl;
        std::cout << "shortestSpan: " << sp3.shortestSpan() << std::endl;
        std::cout << "longestSpan: " << sp3.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "An error has occurred!" << std::endl;
    }

    return (0);
}
