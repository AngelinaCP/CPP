#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void    Contact::check_print_str(std::string str) {
    std::cout << "|";
    if (str.length() <= 10) {
        for (int i = 0; i < 10 - str.length(); i++) {
            std::cout << " ";
        }
        std::cout << str;
    }
    else {
        std::cout << str.substr(0, 9) << ".";
    }
}

void    Contact::findContact(Contact contact) {
    std::cout << "First name: " << contact.first_name << std::endl;
    std::cout << "Last name: " << contact.last_name << std::endl;
    std::cout << "Number: " << contact.number << std::endl;
    std::cout << "Nickname: " << contact.nickname << std::endl;
    std::cout << "Darkest secret: " << contact.secret << std::endl;
}

void    Contact::printPhoneBook(int index) {
        std::cout << "|"  << "    " << index << "     ";
        check_print_str(this->first_name);
        check_print_str(this->last_name);
        check_print_str(this->nickname);
}

std::string getInfo(std::string line) {
    std::string str;

    std::cout << line << std::endl;
    while (str.empty()) {
        std::getline(std::cin, str);
        if (str.empty())
            std::cout << "Please enter a string: ";
    }
    return str;
}

void Contact::seeCap() {
    std::cout       << "-----------" << "-----------" << "-----------" << "------------\n"
                    << "|  index   |" << "first name|" << "last name |" << " nickname |\n"
                    << "-----------" << "-----------" << "-----------" << "------------\n";
}

void Contact:: setInfo(int index) {

    this->index += 1;
    first_name = getInfo("Enter the first name: ");
    last_name = getInfo("Enter the last name: ");
    nickname = getInfo("Enter the nickname: ");
    number = getInfo("Enter the phone number: ");
    secret = getInfo("Enter your darkest secret: ");
}
