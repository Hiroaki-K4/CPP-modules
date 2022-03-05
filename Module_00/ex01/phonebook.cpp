/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:40:54 by hkubo             #+#    #+#             */
/*   Updated: 2022/03/05 11:47:30 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	added_nums = 0;
}

void PhoneBook::replaceOldestContact()
{
	size_t i;

	i = 0;
	while (i < 7)
	{
		contact[i].setFirstname(contact[i + 1].getFirstname());
		contact[i].setLastname(contact[i + 1].getLastname());
		contact[i].setNickname(contact[i + 1].getNickname());
		contact[i].setPhoneNumber(contact[i + 1].getPhoneNumber());
		contact[i].setDarkestSecret(contact[i + 1].getDarkestSecret());
		i++;
	}
}

void PhoneBook::addContact()
{
	std::string tmp;

	if (added_nums == 8)
	{
		PhoneBook::replaceOldestContact();
		added_nums--;
	}
	std::cout << "Please enter first name, last name, nickname, phone number, darkest secret." << std::endl;
	std::cout << "Please enter first name." << std::endl;
	std::cin >> tmp;
	contact[added_nums].setFirstname(tmp);
	std::cout << "Please enter last name." << std::endl;
	std::cin >> tmp;
	contact[added_nums].setLastname(tmp);
	std::cout << "Please enter nickname." << std::endl;
	std::cin >> tmp;
	contact[added_nums].setNickname(tmp);
	std::cout << "Please enter phone number." << std::endl;
	std::cin >> tmp;
	contact[added_nums].setPhoneNumber(tmp);
	std::cout << "Please enter darkest secret." << std::endl;
	std::cin >> tmp;
	contact[added_nums].setDarkestSecret(tmp);
	std::cout << contact[added_nums].getFirstname() << " " << contact[added_nums].getLastname() << " " << contact[added_nums].getNickname() << " " << contact[added_nums].getPhoneNumber() << " " << contact[added_nums].getDarkestSecret() << std::endl;
	std::cout << "Person: " << added_nums << std::endl;
	added_nums++;
}

void PhoneBook::searchContact()
{
	std::cout << "Search now..." << std::endl;
}
