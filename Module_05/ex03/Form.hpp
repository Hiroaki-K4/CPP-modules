/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:59:47 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/14 19:09:19 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
    protected:
        const std::string name;
        bool is_signed;
        const int sign_grade;
        const int exec_grade;
    public:
        Form(const std::string &name, const int sign_grade, const int exec_grade);
        Form(const Form &obj);
        virtual ~Form();
        Form &operator=(const Form &obj);
        std::string getName() const;
        bool getIsSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;
        void beSigned(const int grade);
        void beExecuted(const int grade) const;
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        virtual void execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream& os, const Form &obj);

#endif
