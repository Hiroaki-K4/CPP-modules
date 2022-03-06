/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:11:32 by hkubo             #+#    #+#             */
/*   Updated: 2022/03/06 21:39:24 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "contact.hpp"

class PhoneBook
{
    private:
        size_t added_nums;
    public:
        Contact contact[8];
        PhoneBook();
        void addContact();
        void showContact(int index);
        void searchContact();
        std::string editOutput(std::string word);
        void replaceOldestContact();
};
