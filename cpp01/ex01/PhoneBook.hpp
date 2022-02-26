#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{

public:
	Contact contacts[8];
	int index;
	void get_input(void);
	void Add(void);
	PhoneBook();
	~PhoneBook();
};

#endif