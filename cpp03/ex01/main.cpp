#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void) {
	std::cout  << std::endl;
    std::cout << "\033[45mClapTrap\033[0m" << std::endl;
	std::cout  << std::endl;
    ClapTrap	Michael("Michael");

    Michael.attack("Andrew");
    Michael.takeDamage(10);
    Michael.beRepaired(15);

    ClapTrap	Andrew;
    Andrew.attack("Michael");
    Andrew.takeDamage(20);
    Andrew.beRepaired(25);
  	std::cout  << std::endl;
    std::cout << "\033[45mScavTrap\033[0m" << std::endl;
	std::cout  << std::endl;
    ScavTrap	Alex("Alex");

    Alex.attack("Andrew");
    Alex.takeDamage(18);
    Alex.beRepaired(40);
    Alex.guardGate();
}