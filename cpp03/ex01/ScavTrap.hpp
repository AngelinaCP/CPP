#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap();
    ScavTrap(const std::string name);
    ~ScavTrap();
	ScavTrap &operator=(const ScavTrap &type);
	ScavTrap(const ClapTrap &type);

	void	attack(const std::string& target);
	void	guardGate(void);

};

#endif
