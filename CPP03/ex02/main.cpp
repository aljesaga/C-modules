#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap one("Stormtrooper");
    FragTrap four("Deathtrooper");
    ClapTrap tree;

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
    return (0);
}