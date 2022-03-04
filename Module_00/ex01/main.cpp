/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:40:54 by hkubo             #+#    #+#             */
/*   Updated: 2022/03/04 22:42:29 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
