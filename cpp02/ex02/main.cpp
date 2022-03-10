#include <iostream>

int main(void) {

    std::string str = "HI THIS IS BRAIN";

    std::string *ptr = &str;
    std::string &ref = str;
    std::cout << "this is the address of a string: " << &str << std::endl;
    std::cout << "this is the address held by ptr: " << ptr << std::endl;
    std::cout << "this is the address held by ref: " << &ref << std::endl;

    std::cout << "this is the value of the string var: " << str << std::endl;
    std::cout << "this is the value pointed to by ptr: " << *ptr << std::endl;
    std::cout << "this is the value pointed to by ref: " << ref << std::endl;
}