/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:06:02 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/03 14:40:34 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string name, const int grade);
        Bureaucrat(const Bureaucrat &obj);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &obj);
        std::string getName() const;
        int getGrade() const;
        void increaseGrade();
        void decreaseGrade();
        void GradeTooHighException();
        void GradeTooLowException();
};

#endif
