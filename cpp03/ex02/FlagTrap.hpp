#ifndef FLAGTRAP_H
# define FLAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FlagTrap : virtual public ClapTrap, virtual public ScavTrap {

public:

    FlagTrap();
    FlagTrap(const std::string name);
    ~FlagTrap();
    FlagTrap &operator=(const FlagTrap &type);
    FlagTrap(const FlagTrap &type);

    void	attack(const std::string& target);
    void    highFivesGuys(void);

};

#endif
