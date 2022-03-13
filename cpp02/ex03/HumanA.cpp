#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() {};

void HumanA::attack() {
    std::cout << "HumanA " << this->name
    << " attacks with their " << weapon.getType() <<std::endl;
}
