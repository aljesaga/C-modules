#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap one("stormtrooper");
    ScavTrap two("red guardian");
    ClapTrap tree;

    while (one.get_value(1) > 0)
    {
        one.attack("laser cannon");
        tree.takeDamage(one.get_value(2));
    }
    if (tree.get_value(1) > 0 && tree.get_value(0) < 10)
        tree.beRepaired(1);
    else
        std::cout<<"You don't need to repair because all the shots failed"<<std::endl;
    two.attack("Electric spear");
    tree.takeDamage(two.get_value(2));
    return (0);
}