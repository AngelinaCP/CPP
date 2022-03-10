#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include <iostream>

class HumanB {

private:
    Weapon *weapon;
    std::string name;

public:
    HumanB();
    HumanB(const std::string &name);
    HumanB(const std::string &name, Weapon &weapon);
    ~HumanB();

    void attack();
    void setWeapon(Weapon &weapon);
};

#endif