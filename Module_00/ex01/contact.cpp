/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:40:54 by hkubo             #+#    #+#             */
/*   Updated: 2022/03/06 23:11:34 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::setFirstname(std::string str)
{
	first_name = str;
}

void Contact::setLastname(std::string str)
{
	last_name = str;
}

void Contact::setNickname(std::string str)
{
	nick_name = str;
}

void Contact::setPhoneNumber(std::string str)
{
	phone_number = str;
}

void Contact::setDarkestSecret(std::string str)
{
	darkest_secret = str;
}

std::string Contact::getFirstname()
{
	return first_name;
}

std::string Contact::getLastname()
{
	return last_name;
}

std::string Contact::getNickname()
{
	return nick_name;
}

std::string Contact::getPhoneNumber()
{
	return phone_number;
}

std::string Contact::getDarkestSecret()
{
	return darkest_secret;
}
