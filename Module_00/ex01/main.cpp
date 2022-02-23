#include <iostream>

int main(int argc, char *argv[])
{
	(void)argv;
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
			{
				std::cout << "Please enter first name, last name, nickname, phone number,darkest secret." << std::endl;
				std::string contact;
				std::cin >> contact;
				std::cout << contact << std::endl;
			}
		}
	}
	return (0);
}
