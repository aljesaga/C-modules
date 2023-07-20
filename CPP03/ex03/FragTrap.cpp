#include "FragTrap.hpp"

FragTrap::FragTrap(std::string ID): ClapTrap(ID)
{
    this->Name = ID;
    this->Hit_Points = 100;
    this->Energy_Points = 100;
    this->Attack_Damage = 30;
    std::cout<<YELLOW;
     std::cout<<"ClapTrap "<<this->Name<<" has been promoted "<<" FragTrap"<<std::endl;
    std::cout<<RESET;
}

FragTrap::FragTrap(): ClapTrap()
{
    this->Name = "Generic Commander";
    this->Hit_Points = 100;
    this->Energy_Points = 100;
    this->Attack_Damage = 30;
    std::cout<<YELLOW;
    std::cout<<"ClapTrap "<<this->Name<<" has been promoted "<<" FragTrap"<<std::endl;
    std::cout<<RESET;
}

FragTrap::~FragTrap()
{
    std::cout<<YELLOW;
    std::cout<<"Fragtrap "<<this->Name<<" It has retired"<<std::endl;
    std::cout<<RESET;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout<<YELLOW;
    std::cout<<"Fragtrap "<<this->Name<<" high five for the good job"<<std::endl;
    std::cout<<RESET;
}