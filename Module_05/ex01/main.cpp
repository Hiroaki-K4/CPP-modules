/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:05:02 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/05 16:22:48 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat person1("person1", 42);
        std::cout << person1 << std::endl;
        Form form1("form1", 100, 100);
        std::cout << form1 << std::endl;
        person1.signForm(form1);
        std::cout << form1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        Bureaucrat person2("person2", 150);
        std::cout << person2 << std::endl;
        Form form2("form2", 100, 100);
        std::cout << form2 << std::endl;
        person2.signForm(form2);
        std::cout << form2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
