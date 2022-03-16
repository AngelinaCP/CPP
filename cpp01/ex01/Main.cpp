#include "Zombie.hpp"

int main(void) {
    Zombie *z = zombieHorde(5, "Franca");

    for (int i = 0; i < 5; i++) {
        z->announce();
    }
    delete[] z;
}