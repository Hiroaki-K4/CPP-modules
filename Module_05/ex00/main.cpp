/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:05:02 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/03 15:01:14 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat person1("person1", 1);
        std::cout << person1.getName() << " " << person1.getGrade() << std::endl;
        person1.increaseGrade();
        person1.increaseGrade();
        std::cout << person1.getName() << " " << person1.getGrade() << std::endl;
        person1.decreaseGrade();
        std::cout << person1.getName() << " " << person1.getGrade() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
