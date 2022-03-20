#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
protected:
    std::string name;
	int			hit_points;
	int			energy_points;
	int			attack_damage;
	ClapTrap(const std::string name_s, int hit_points_s, int energy_points_s, int attack_damage_s);

public:

	ClapTrap();
    ClapTrap(const std::string name);
    ~ClapTrap();
	ClapTrap &operator=(const ClapTrap &type);
	ClapTrap(const ClapTrap &type);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};



#endif