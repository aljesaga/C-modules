#include "Zombie.hpp"

Zombie::Zombie(std::string id)
{
    name = id;
}

Zombie::~Zombie()
{
}

void    Zombie::announce(void)
{
    std::cout<<this->name<<": BraiiiiiiinnnzzzZ...\n";
}