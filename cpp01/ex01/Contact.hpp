#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{

private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string secret;

public:
			Contact(void);
			~Contact(void);
//		int index;
		void fun(void);

};

#endif