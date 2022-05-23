/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 22:31:50 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/15 17:11:03 by hkubo            ###   ########.fr       */
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

Form *Intern::ShrubberyCreation(const std::string target)
{
    Form *form = new ShrubberyCreationForm(target);
    return (form);
}

Form *Intern::RobotomyRequest(const std::string target)
{
    Form *form = new RobotomyRequestForm(target);
    return (form);
}

Form *Intern::PresidentialPardon(const std::string target)
{
    Form *form = new PresidentialPardonForm(target);
    return (form);
}

Form *Intern::makeForm(std::string form_name, std::string target_form)
{
    const std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form *(Intern::*form_func[3])(const std::string target) = {&Intern::ShrubberyCreation, &Intern::RobotomyRequest, &Intern::PresidentialPardon};

    for (int i = 0; i < 3; i++)
    {
        if (forms[i] == form_name)
        {
            std::cout << "Intern creates " << form_name << std::endl;
            return ((this->*form_func[i])(target_form));
        }
    }
    throw NoSuchParameterException();
}

const char* Intern::NoSuchParameterException::what() const throw()
{
    return ("No such parameter!");
}
