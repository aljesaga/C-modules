#include "ClapTrap.hpp"

int main(void)
{
    std::cout<<"--------------- Constructor -----------"<<std::endl;
    ClapTrap one("stormtrooper");
    std::cout<<std::endl<<"--------------- Copy constructor -----------"<<std::endl;
    ClapTrap two(one);
    std::cout<<std::endl<<"--------------- Default constructor -----------"<<std::endl;
    ClapTrap tree;
    std::cout<<std::endl<<"--------------- Operator = -----------"<<std::endl;
    tree = ClapTrap("shooting target");
    std::cout<<std::endl;

    while (one.get_value(1) > 5)
    {
        one.attack("laser cannon");
        tree.takeDamage(one.get_value(2));
    }
    if (tree.get_value(1) > 0 && tree.get_value(0) < 10)
        tree.beRepaired(1);
    else
        std::cout<<"You don't need to repair because all the shots failed"<<std::endl;
    std::cout<<std::endl;
    return (0);
}