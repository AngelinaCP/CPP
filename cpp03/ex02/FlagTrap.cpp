#include "FlagTrap.hpp"

FlagTrap::FlagTrap(const std::string name) : ClapTrap(name, 100, 100, 30) {
    std::cout << "Calling FlagTrap " << name << " object constructor " << std::endl;
}

FlagTrap::~FlagTrap() {
    std::cout   << "FlagTrap " << name << " object destructor called" << std::endl;
}

void    FlagTrap::attack(const std::string& target) {
    std::cout	<< "FlagTrap " << name  << " attacks " << target
                 << " causing " << attack_damage << " points of damage" << std::endl;
}

void    FlagTrap::highFivesGuys(void) {
    std::cout << "Give a high five dude" << std::endl;
}

FlagTrap &FlagTrap::operator=(const FlagTrap &type) {
    this->name = type.name;
    this->energy_points = type.energy_points;
    this->hit_points = type.hit_points;
    this->attack_damage = type.attack_damage;

    std::cout << "Assignment operator for FlagTrap called" << std::endl;
    return *this;
}

FlagTrap::FlagTrap(const FlagTrap &type) : ClapTrap(type.name, type.hit_points, type.energy_points, type.attack_damage){

    std::cout << "FlagTrap copy constructor called" << std::endl;
}