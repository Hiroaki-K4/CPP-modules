/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 22:31:50 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/14 18:37:36 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &obj)
{
    (void)obj;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &obj)
{
    (void)obj;
    return (*this);
}

Form *Intern::makeForm(std::string form_name, std::string target_form)
{
    const std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    // Form *(*form_func[3])(const std::string target) = {&ShrubberyCreationForm::createForm, &RobotomyRequestForm::createForm, &PresidentialPardonForm::createForm};

    for (int i = 0; i < 3; i++)
    {
        if (forms[i] == form_name)
        {
            std::cout << form_name << std::endl;
        }
    }
    std::cout << form_name << " " << target_form << std::endl;
    return (NULL);
}
