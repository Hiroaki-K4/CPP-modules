/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:35:54 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/07 12:36:41 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name) : Form(name, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form(obj)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    this->Form::operator=(obj);
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    (void)executor;
    std::cout << "Weeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeen!" << std::endl;
    if (std::rand() % 2)
        std::cout << this->getName() << " has been robotomized successfully." << std::endl;
    else
        std::cout << "The robotomy failed." << std::endl;
}

Form *RobotomyRequestForm::createForm(const std::string target)
{
    return (new RobotomyRequestForm(target));
}
