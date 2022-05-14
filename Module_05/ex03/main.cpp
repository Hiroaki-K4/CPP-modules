/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:05:02 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/14 18:36:16 by hkubo            ###   ########.fr       */
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
        intern1.makeForm("robotomy request", "target1");
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
