#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout<<this->name<<": El descanso es para los vivos\n";
}

void    Zombie::setZombie(std::string name)
{
    this->name = name;
}

void    Zombie::announce(void)
{
    std::cout<<this->name<<": BraiiiiiiinnnzzzZ...\n";
}