#include "DiamondTrap.hpp"
int main(void)
{
    DiamondTrap one("Anakin SkyWalker");
    std::cout<<std::endl;
    DiamondTrap two;
    std::cout<<std::endl;

    one.whoAmI();
    one.attack("Obi-wan Kenobi");
    one.guardGate();
    one.beRepaired(30);
    one.highFivesGuys();
    one.takeDamage(10);
    std::cout<<std::endl;
    two.whoAmI();
    two.attack("Luke SkyWalker");
    std::cout<<std::endl;

    return (0);
}