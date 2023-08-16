#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout<<"--------------- ClapTrap constructor -----------"<<std::endl;
    ClapTrap one("Stormtrooper");
    std::cout<<std::endl<<"--------------- ScavTrap Default constructor -----------"<<std::endl;
    ScavTrap two("Red guardian");
    std::cout<<std::endl<<"--------------- Copy constructor -----------"<<std::endl;
    ScavTrap aux(two);
    std::cout<<std::endl<<"--------------- Operator = -----------"<<std::endl;
    aux = ScavTrap("R2D2");
    std::cout<<std::endl<<"-----------------CalpTrap Default constructor----------"<<std::endl;
    ClapTrap tree;
    std::cout<<std::endl;

    while (one.get_value(1) > 5)
    {
        one.attack("laser cannon");
        std::cout<<GREEN;
        tree.takeDamage(one.get_value(2));
        std::cout<<RESET;
    }
    if (tree.get_value(1) > 0 && tree.get_value(0) < 10)
        tree.beRepaired(1);
    else
    {
        std::cout<<GREEN;
        std::cout<<"You don't need to repair because all the shots failed"<<std::endl;
        std::cout<<RESET;
    }
    two.attack("Electric spear");
    tree.takeDamage(two.get_value(2));
    std::cout<<std::endl;
    return (0);
}