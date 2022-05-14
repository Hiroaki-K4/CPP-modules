/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:36:06 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/07 12:04:23 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <stdlib.h>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string name);
        RobotomyRequestForm(const RobotomyRequestForm &obj);
        ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
        void execute(Bureaucrat const &executor) const;
        Form *createForm(const std::string target);
};

#endif
