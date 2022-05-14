/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:37:24 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/07 12:04:30 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string name);
        PresidentialPardonForm(const PresidentialPardonForm &obj);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
        void execute(Bureaucrat const &executor) const;
        Form *createForm(const std::string target);
};

#endif
