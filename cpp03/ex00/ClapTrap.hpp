#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{

private:

	std::string name;
	int			hit_points;
	int			energy_points;
	int			attack_damage;

public:

    ClapTrap(name);
    ~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};



#endif