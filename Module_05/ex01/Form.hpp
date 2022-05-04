/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:59:47 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/04 10:58:44 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Form
{
    private:
        const std::string name;
        bool is_signed;
        const int sign_grade;
        const int exec_grade;
    public:
        Form(const std::string name, const int sign_grade, const int exec_grade);
        Form(const Form &obj);
        ~Form();
        Form &operator=(const Form &obj);
        std::string getName() const;
        bool getIsSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;
        void beSigned(const int grade);
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
};

std::ostream &operator<<(std::ostream& os, const Form &obj);

#endif