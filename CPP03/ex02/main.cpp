#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    std::cout<<std::endl<<"--------------- Claptrap constructor -----------"<<std::endl;
    ClapTrap one("Stormtrooper");
    std::cout<<std::endl<<"--------------- Fragtrap constructor -----------"<<std::endl;
    FragTrap four("Deathtrooper");
    std::cout<<std::endl<<"--------------- FragTrap Copy constructor -----------"<<std::endl;
    FragTrap two(four);
    std::cout<<std::endl<<"--------------- Operator = -----------"<<std::endl;
    two = FragTrap("C3PO");
    std::cout<<std::endl<<"--------------- Claptrap Default constructor -----------"<<std::endl;
    ClapTrap tree;
    std::cout<<std::endl;

    while (one.get_value(1) > 7)
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
    four.highFivesGuys();
    std::cout<<std::endl;
    return (0);
}