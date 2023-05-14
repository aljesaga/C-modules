#include "Zombie.hpp"

void    *Zombie::newZombie(std::string name)
{
    Zombie new_z(name);
    return (new_z);
}
