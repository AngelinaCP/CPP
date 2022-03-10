#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
public:

    Zombie(std::string name);
    Zombie();
    ~Zombie();
    int         n;
    std::string name;

    void    giveName(std::string name);
    void    announce(void);
};

Zombie  *zombieHorde(int n, std::string name);

#endif