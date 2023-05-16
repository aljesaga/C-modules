#include "Zombie.hpp"

int main()
{
    Zombie one;
    Zombie *horder;

    one.setZombie("Hecarim");
    one.announce();
    horder = zombieHorde(6, "minion");
    delete [] horder;

    return (0);
}