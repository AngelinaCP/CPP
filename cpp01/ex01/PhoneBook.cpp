#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->utter_index = 0;
}

PhoneBook::~PhoneBook() {}

void    PhoneBook::Search(void)
{
//    if (utter_index == 0)
//    {
//        std::cout << "The PhoneBook is empty!" << std::endl;
//        return ;
//    }
//    contacts.co
    contacts->seeCap();
    for (int i = 0; i < this->count; i++)
    {
        contacts[i].printPhoneBook(i + 1);
        std::cout << "|";
        std::cout << std::endl;
    }

}

void    PhoneBook::Add(void)
{
//    std::cout << "count: " << utter_index << std::endl;
    utter_index = utter_index == 8 ? 0 : utter_index;
    contacts[utter_index].setInfo(utter_index);
    utter_index++;
    count = utter_index == 8 ? 8 : utter_index;
//	std::cout << "Index: " << contacts[0].index;
//	contacts[.index++;
}