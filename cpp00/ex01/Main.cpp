#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook contacts;
    std::string str;

    std::cout << "Enter one of the commands: ADD, SEARCH, EXIT: " << std::endl;
    std::getline(std::cin, str);
    contacts.utter_index = 0;
    while (1)
    {
        if (str.compare("ADD") == 0)
            contacts.Add();
        else if (str.compare("SEARCH") == 0)
            contacts.Search();
        else if (str.compare("EXIT") == 0)
            break ;
        else
            std::cout << "Wrong command name!" << std::endl;
        std::cout << "Enter one of the commands: ADD, SEARCH, EXIT: " << std::endl;
        std::getline(std::cin, str);
    }
	return (0);
}