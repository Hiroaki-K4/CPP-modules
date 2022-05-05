/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:05:43 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/05 16:52:49 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : name(name)
{
    if (grade < 1)
        Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        Bureaucrat::GradeTooLowException();
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name)
{
    this->grade = obj.grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    this->grade = obj.grade;
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::increaseGrade()
{
    if (this->grade == 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade -= 1;
}

void Bureaucrat::decreaseGrade()
{
    if (this->grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low!");
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(this->getGrade());
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->getName() <<  " couldn't sign " << form.getName() << " because " << e.what() << "." << std::endl;
    }
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return (os);
}
