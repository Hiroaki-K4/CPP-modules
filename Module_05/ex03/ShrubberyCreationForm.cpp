/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:34:22 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/05 17:42:04 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) : Form(name, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : Form(obj)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    this->Form::operator=(obj);
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    (void)executor;
    std::string file_name = this->getName() + "_shrubbery";
    std::ofstream File(file_name.c_str());
    File << ASCII_TREES;
    File.close();
}
