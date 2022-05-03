/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:05:02 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/03 22:27:55 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat person1("person1", 1);
        std::cout << person1 << std::endl;
        person1.increaseGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat person2("person2", 150);
        std::cout << person2 << std::endl;
        person2.decreaseGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
