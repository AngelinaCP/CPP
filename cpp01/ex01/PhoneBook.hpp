#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{

public:
    PhoneBook();
    ~PhoneBook();

	Contact contacts[8];
	int     utter_index;
    int     count;
	void    Add(void);
    void    Search(void);
};

#endif