#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->utter_index = 0;
    this->count = 0;
}

PhoneBook::~PhoneBook() {}

void    PhoneBook::Search(void) {

    std::string str;
    int index;

    if (count == 0)
    {
        std::cout << "The PhoneBook is empty!" << std::endl;
        return ;
    }

    contacts->seeCap();
    count = count >= 8 ? 8 : count;

    for (int i = 0; i < count; i++)
    {
        contacts[i].printPhoneBook(i + 1);
        std::cout << "|";
        std::cout << std::endl;
    }
    std::cout << "Enter the index of a contact: ";
    while (1) {
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
        try {
            index = std::stoi(str);
                contacts->findContact(contacts[std::stoi(str) - 1]);
                break;
            }
        catch (std::invalid_argument e) {
            std::cout << "Enter a correct index please: ";
            }
        }
}

void    PhoneBook::Add(void)
{
    count++;
    utter_index = count > 8 ? 0 : utter_index;
    contacts[utter_index].setInfo(utter_index);
    utter_index++;
}