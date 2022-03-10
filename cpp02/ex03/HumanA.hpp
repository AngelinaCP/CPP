#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include <iostream>

class HumanA {

private:
    Weapon &weapon;
    std::string name;

public:

    HumanA(const std::string &name, Weapon &weapon);
    ~HumanA();

    void attack();
};

#endif