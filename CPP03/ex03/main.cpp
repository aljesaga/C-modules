#include "DiamondTrap.hpp"
int main(void)
{
    std::cout<<"--------------- Diamondtrap constructor -----------"<<std::endl;
    DiamondTrap one("Anakin SkyWalker");
    std::cout<<std::endl<<"--------------- Diamondtrap default constructor -----------"<<std::endl;
    DiamondTrap two;
    std::cout<<std::endl<<"--------------- Diamondtrap copy constructor -----------"<<std::endl;
    DiamondTrap tree(one);
    std::cout<<std::endl<<"--------------- Operator = -----------"<<std::endl;
    tree = DiamondTrap("Yoda");
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

    tree.whoAmI();
    tree.attack("Darth Vader");

    std::cout<<std::endl;

    return (0);
}