#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::Zombie(std::string name) {
    this->name = name;
}

void    Zombie::announce() {
    std::cout << name << ": "
              << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::giveName(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << name << " has died" << std::endl;
}