/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:59:17 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/07 12:37:11 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, const int sign_grade, const int exec_grade) : name(name), sign_grade(sign_grade), exec_grade(exec_grade)
{
    this->is_signed = false;
}

Form::Form(const Form &obj): name(obj.getName()), sign_grade(obj.getSignGrade()), exec_grade(obj.getExecGrade())
{
    this->is_signed = obj.is_signed;
}

Form &Form::operator=(const Form &obj)
{
    this->is_signed = obj.is_signed;
    return (*this);
}

Form::~Form()
{
}

std::string Form::getName() const
{
    return (this->name);
}

bool Form::getIsSigned() const
{
    return (this->is_signed);
}

int Form::getSignGrade() const
{
    return (this->sign_grade);
}

int Form::getExecGrade() const
{
    return (this->exec_grade);
}

void Form::beSigned(const int grade)
{
    if (grade > this->sign_grade)
        throw Form::GradeTooLowException();
    this->is_signed = true;
}

void Form::beExecuted(const int grade) const
{
    if (grade > this->exec_grade)
        throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("grade is too low");
}

std::ostream &operator<<(std::ostream& os, const Form &obj)
{
    os << "Name: " << obj.getName() << ", IsSigned: " << obj.getIsSigned() << ", SignGrade: " << obj.getSignGrade() << ", ExecGrade: " << obj.getExecGrade() << ".";
    return (os);
}

void Form::execute(Bureaucrat const &executor) const
{
    (void)executor;
    std::cout << "Form::execute" << std::endl;
}
