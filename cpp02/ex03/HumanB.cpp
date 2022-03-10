#include "HumanB.hpp"

HumanB::~HumanB() {};

HumanB::HumanB(const std::string &name) : name(name), weapon(NULL) {}

void HumanB::attack() {
    std::cout << "HumanB " << this->name
    << " attacks with their " << this->weapon->getType() <<std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    HumanB::weapon = &weapon;
}