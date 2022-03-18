#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

private:

	std::string name;
	int			hit_points;
	int			energy_points;
	int			attack_damage;

public:

    ScavTrap(std::string name);
    ~ScavTrap();
	ScavTrap &operator=(const ScavTrap &type);
	ScavTrap(ClapTrap &type);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};
