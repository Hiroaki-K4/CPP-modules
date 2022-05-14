/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 22:32:14 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/14 21:58:26 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &obj);
        ~Intern();
        Intern &operator=(const Intern &obj);
        Form *makeForm(std::string form_name, std::string target_form);
        Form *ShrubberyCreation(const std::string target);
        Form *RobotomyRequest(const std::string target);
        Form *PresidentialPardon(const std::string target);
        class NoSuchParameterException : public std::exception
        {
            public:
                const char *what() const throw();
        };
};

#endif
