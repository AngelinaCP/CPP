#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap pers("Jack");
	ClapTrap pers2("Adam");

	pers.attack("Adam");
	pers.beRepaired(8);
	pers.takeDamage(4);

	pers.attack("Jack");
	pers.beRepaired(13);
	pers.takeDamage(4);

	ClapTrap pers3(pers);
	pers = pers2;

}