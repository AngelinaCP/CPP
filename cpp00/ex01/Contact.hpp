#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{

private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
    std::string number;
	std::string secret;

public:
        Contact(void);
        ~Contact(void);

        int     index;
        void    setInfo(int index);
        void    printPhoneBook(int index);
        void    check_print_str(std::string str);
        void    seeCap(void);
        void    findContact(Contact contact);

};

#endif