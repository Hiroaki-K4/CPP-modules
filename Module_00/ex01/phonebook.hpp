/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:11:32 by hkubo             #+#    #+#             */
/*   Updated: 2022/06/05 17:28:42 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "contact.hpp"

class PhoneBook
{
    private:
        size_t added_nums;
        Contact contact[8];
    public:
        PhoneBook();
        void addContact();
        void showContact(int index);
        void searchContact();
        std::string editOutput(std::string word);
        void replaceOldestContact();
};

#endif
