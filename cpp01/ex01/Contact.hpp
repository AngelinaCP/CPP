#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{

private:
//    int index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string secret;

public:
    int index;
        Contact(void);
        ~Contact(void);
//		int index;
		void    setInfo(int index);
        void    printPhoneBook(int index);
        void    check_print_str(std::string str);
        void    seeCap(void);

};

#endif