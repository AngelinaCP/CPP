#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
    ClapTrap::name = name;
}
ClapTrap::~ClapTrap() {}

void    ClapTrap::attack(const std::string& target) {

    std::cout   << "ClapTrap " << this->name << " attacks "
                << target << ", causing " << attack_damage
                << " points of damage!" << std::endl;
    this->energy_points--;
}

void    ClapTrap::takeDamage(unsigned int amount) {

}

void    ClapTrap::beRepaired(unsigned int amount) {
    this->hit_points += amount;
    this->energy_points--;
}