/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:05:02 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/05 18:13:46 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    std::srand(time(NULL));

    try
    {
        Bureaucrat person1("person1", 1);
        std::cout << person1 << std::endl;
        ShrubberyCreationForm form1("form1");
        std::cout << form1 << std::endl;
        person1.signForm(form1);
        std::cout << form1 << std::endl;
        person1.executeForm(form1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        Bureaucrat person2("person2", 1);
        std::cout << person2 << std::endl;
        RobotomyRequestForm form2("form2");
        std::cout << form2 << std::endl;
        person2.signForm(form2);
        std::cout << form2 << std::endl;
        person2.executeForm(form2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        Bureaucrat person3("person3", 1);
        std::cout << person3 << std::endl;
        PresidentialPardonForm form3("form3");
        std::cout << form3 << std::endl;
        person3.signForm(form3);
        std::cout << form3 << std::endl;
        person3.executeForm(form3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        Bureaucrat person4("person4", 6);
        std::cout << person4 << std::endl;
        PresidentialPardonForm form4("form4");
        std::cout << form4 << std::endl;
        person4.signForm(form4);
        std::cout << form4 << std::endl;
        person4.executeForm(form4);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
