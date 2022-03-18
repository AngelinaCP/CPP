#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {

	std::cout << "Calling " << name << " object constructor" << std::endl;
    this->name = name;
	this->energy_points = 10;
	this->hit_points = 10;
	this->attack_damage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "Calling destructor..." << std::endl;
}

void    ClapTrap::attack(const std::string& target) {

	if (energy_points > 0) {
		std::cout   << "ClapTrap " << this->name << " attacks "
                << target << ", causing " << attack_damage
                << " points of damage!" << std::endl;
    	this->energy_points--;
	} else {
		std::cout << "Not enough energy points" << std::endl;
	}
}

void    ClapTrap::takeDamage(unsigned int amount) {
	if (hit_points <= 0) {
		std::cout << name << " is dead :(" << std::endl;
	} else {
		hit_points -= amount;
		if (hit_points <= 0) {
			std::cout << name << " has just died :((" << std::endl;
		} else {
			std::cout	<< name << " has " << hit_points 
						<< " hit points left" << std::endl; 
		}
	}
}

void    ClapTrap::beRepaired(unsigned int amount) {
	
	if (hit_points <= 0) {
		std::cout	<< "Unfortunately, " << name 
					<< " is already dead :(" << std::endl; 
	} else {
		if (energy_points > 0) {
	    this->hit_points += amount;
	    this->energy_points--;
		std::cout	<< "ClapTrap " << this->name 
			<< " has " << hit_points << "left :)" << std::endl;
		} else {
			std::cout << "Not enough energy points" << std::endl;
		}
	}
}

ClapTrap &ClapTrap::operator=(const ClapTrap &type) {
	this->name = type.name;
	this->energy_points = type.energy_points;
	this->hit_points = type.hit_points;
	this->attack_damage = type.attack_damage;

	std::cout << "Assignment operator called" << std::endl;
	return *this;
}

ClapTrap::ClapTrap(ClapTrap	&type) {
	this->name = type.name;
	this->energy_points = type.energy_points;
	this->hit_points = type.hit_points;
	this->attack_damage = type.attack_damage;

	std::cout << "Copy constructor called" << std::endl;
}