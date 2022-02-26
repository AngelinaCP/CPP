#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

void	PhoneBook::get_input(void)
{
	std::string str;
	//	int i;
	//	std::cout << "Enter a number: "; std::cin  >> i;
	//	std::cout << "The value is " << i << std::endl;

	std::cout << "Enter one of the commands: ADD, SEARCH, EXIT: "; std::cin >> str;

	if (str.compare("ADD") == 0)
		Add();
	else if (str.compare("SEARCH") == 0)
		std::cout << "You entered SEARCH" << std::endl;
	else if (str.compare("EXIT") == 0)
		std::cout << "You entered EXIT" << std::endl;
	else
		std::cout << "Wrong command name:(" << std::endl;
	return;
}

void PhoneBook::Add(void)
{
//	PhoneBook contacts;

//	if (contacts.index > 8)
//	{
//		contacts.index = 0;
//	}
	std::string f_name;
	std::string l_name;
	std::string nicky;
	std::string d_secret;
	std::cout << "Enter the first name: ";
	contacts[0].fun();
//	std::cout << "Name: " << contacts[0].first_name;
//	contacts[.index++;
}

void PhoneBook::Check(void)
{
}
