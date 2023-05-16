#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "Steve";
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout<<this->name<<": El descanso es para los vivos\n";
}

void    Zombie::announce(void)
{
    std::cout<<this->name<<": BraiiiiiiinnnzzzZ...\n";
}