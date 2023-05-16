#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *horder;
    int     i;

    horder = new Zombie[N];
    for(i = 0; i < N; i++)
    {
        horder[i].setZombie(name);
        horder->announce();
    }
    return (horder);
}
