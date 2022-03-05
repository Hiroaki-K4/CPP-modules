/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:40:54 by hkubo             #+#    #+#             */
/*   Updated: 2022/03/05 11:07:53 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook construct" << std::endl;
}

void PhoneBook::addContact()
{
	std::string tmp;

	std::cout << "Please enter first name, last name, nickname, phone number, darkest secret." << std::endl;
	std::cout << "Please enter first name." << std::endl;
	std::cin >> tmp;
	contact[0].setFirstname(tmp);
	std::cout << "Please enter last name." << std::endl;
	std::cin >> tmp;
	contact[0].setLastname(tmp);
	std::cout << "Please enter nickname." << std::endl;
	std::cin >> tmp;
	contact[0].setNickname(tmp);
	std::cout << "Please enter phone number." << std::endl;
	std::cin >> tmp;
	contact[0].setPhoneNumber(tmp);
	std::cout << "Please enter darkest secret." << std::endl;
	std::cin >> tmp;
	contact[0].setDarkestSecret(tmp);
	std::cout << contact[0].getFirstname() << " " << contact[0].getLastname() << " " << contact[0].getNickname() << " " << contact[0].getPhoneNumber() << " " << contact[0].getDarkestSecret() << std::endl;
}

void PhoneBook::searchContact()
{
	std::cout << "Search now..." << std::endl;
}
