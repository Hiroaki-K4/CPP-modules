/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 22:47:40 by hkubo             #+#    #+#             */
/*   Updated: 2022/06/05 17:23:36 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;

    public:
        void setFirstname(std::string str);
        void setLastname(std::string str);
        void setNickname(std::string str);
        void setPhoneNumber(std::string str);
        void setDarkestSecret(std::string str);
        std::string getFirstname();
        std::string getLastname();
        std::string getNickname();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
};

#endif
