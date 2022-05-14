/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:37:06 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/07 12:04:33 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string name) : Form(name, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : Form(obj)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    this->Form::operator=(obj);
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    (void)executor;
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

Form *PresidentialPardonForm::createForm(const std::string target)
{
    return (new PresidentialPardonForm(target));
}
