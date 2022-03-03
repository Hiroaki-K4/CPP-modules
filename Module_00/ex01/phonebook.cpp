/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:40:54 by hkubo             #+#    #+#             */
/*   Updated: 2022/03/03 23:10:28 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook construct" << std::endl;
}

void PhoneBook::addContact()
{
	std::cout << "Please enter first name, last name, nickname, phone number, darkest secret." << std::endl;
	std::cout << "Please enter first name." << std::endl;
	std::string first_name;
	std::cin >> first_name;
	std::cout << "Please enter last name." << std::endl;
	std::string last_name;
	std::cin >> last_name;
	std::cout << "Please enter nickname." << std::endl;
	std::string nick_name;
	std::cin >> nick_name;
	std::cout << "Please enter phone number." << std::endl;
	std::string phone_number;
	std::cin >> phone_number;
	std::cout << "Please enter darkest secret." << std::endl;
	std::string darkest_secret;
	std::cin >> darkest_secret;
	std::cout << first_name << " " << last_name << " " << nick_name << " " << phone_number << " " << darkest_secret << std::endl;
}

void PhoneBook::searchContact()
{
	std::cout << "Search now..." << std::endl;
}

int main(int argc, char *argv[])
{
	(void)argv;
	PhoneBook phone_book;
	if (argc == 1)
	{
		std::string str;
		std::cout << "My Awesome PhoneBook" << std::endl;
		while (true)
		{
			std::cin >> str;
			if (str == "EXIT")
				break;
			else if (str == "ADD")
				phone_book.addContact();
			else if (str == "SEARCH")
				phone_book.searchContact();
		}
	}
	return (0);
}
