#include "Zombie.hpp"

int main(void) {
    Zombie *zomb = newZombie("Jira");

    randomChump("Italia");
    zomb->announce();
    delete zomb;
}
