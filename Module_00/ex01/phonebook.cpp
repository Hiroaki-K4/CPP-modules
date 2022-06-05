/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:40:54 by hkubo             #+#    #+#             */
/*   Updated: 2022/06/05 17:27:53 by hkubo            ###   ########.fr       */
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
	added_nums++;
	std::cout << "The contact has been added successfully." << std::endl;
}

std::string PhoneBook::editOutput(std::string word)
{
	if (word.size() > 10)
		return (word.substr(0, 9).append("."));
	return (word);
}

void PhoneBook::showContact(int index)
{
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << std::setw(10) << std::right << index + 1 << '|';
	std::cout << std::setw(10) << std::right << editOutput(contact[index].getFirstname()) << '|';
	std::cout << std::setw(10) << std::right << editOutput(contact[index].getLastname()) << '|';
	std::cout << std::setw(10) << std::right << editOutput(contact[index].getNickname()) << std::endl;
}

void PhoneBook::searchContact()
{
	int index;

	if (added_nums == 0)
	{
		std::cout << "No one has been added to the phone book." << std::endl;
		return ;
	}
	std::cout << "Please enter the index." << std::endl;
	std::cin >> index;
	index -= 1;
	std::cin.clear();
	if (index < 0 || (size_t)index >= added_nums)
	{
		std::cout << "The index entered has not been added." << std::endl;
		std::cin.ignore(1024, '\n');
		return ;
	}
	else
	{
		showContact(index);
		std::cin.ignore(1024, '\n');
	}
}
