/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:34:34 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/07 12:38:21 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

#define ASCII_TREES "\
       @\n\
      @ @\n\
     @   @\n\
    @     @\n\
   @       @\n\
  @         @\n\
 @___________@\n\
      | |\n\
      | |\n\
      |_|\n"

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &name);
        ShrubberyCreationForm(const ShrubberyCreationForm &obj);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
        void execute(Bureaucrat const &executor) const;
        Form *createForm(const std::string &target);
};

#endif
