/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:05:43 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/03 15:00:00 by hkubo            ###   ########.fr       */
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
    {
        throw std::runtime_error("Grade is too high!");
        Bureaucrat::GradeTooHighException();
    }
    else
        this->grade -= 1;
}

void Bureaucrat::decreaseGrade()
{
    if (this->grade == 150)
    {
        throw std::runtime_error("Grade is too low!");
        Bureaucrat::GradeTooLowException();
    }
    else
        this->grade += 1;
}

void Bureaucrat::GradeTooHighException()
{
    std::cout << "GradeTooHighException" << std::endl;
}

void Bureaucrat::GradeTooLowException()
{
    std::cout << "GradeTooLowException" << std::endl;
}
