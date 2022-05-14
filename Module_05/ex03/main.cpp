/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:05:02 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/14 22:02:32 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    std::srand(time(NULL));

    try
    {
        Intern intern1;
        Form* rrf;
        rrf = intern1.makeForm("shrubbery creation", "target1");
        std::cout << *rrf << std::endl;
        delete rrf;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        Intern intern2;
        Form* rrf;
        rrf = intern2.makeForm("robotomy request", "target2");
        std::cout << *rrf << std::endl;
        delete rrf;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        Intern intern3;
        Form* rrf;
        rrf = intern3.makeForm("presidential pardon", "target3");
        std::cout << *rrf << std::endl;
        delete rrf;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        Intern intern4;
        Form* rrf;
        rrf = intern4.makeForm("No match", "target4");
        std::cout << *rrf << std::endl;
        delete rrf;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
