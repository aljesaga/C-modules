#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void    ScavTrap::attack(const std::string& target)
{
    if (this->get_value(1) > 0)
    {
        std::cout<<RED;
        std::cout<<this->get_name()<<" fight whit "<<target<<" Causing ";
        std::cout<<this->get_value(2)<<" points of damage"<<std::endl;
        std::cout<<RESET;
        this->Energy_Points--;
    }
    else
    {
        std::cout<<RED;
        std::cout<<this->get_name()<<" is too exhausted to attack"<<std::endl;
        std::cout<<RESET;
    }
}

void    ScavTrap::guardGate()
{
    std::cout<<RED;
    std::cout<<this->get_name()<<" is now in Gate keeper mode"<<std::endl;
    std::cout<<RESET;
}

ScavTrap::ScavTrap(std::string ID): ClapTrap(ID)
{
    this->Name = ID;
    this->Hit_Points = 100;
    this->Energy_Points = 50;
    this->Attack_Damage = 20;
    std::cout<<RED;
    std::cout<<"ScavTrap "<<this->get_name()<<" it's ready"<<std::endl;
    std::cout<<RESET;
}

ScavTrap::ScavTrap()
{
    this->Name = "Default bot";
    this->Hit_Points = 100;
    this->Energy_Points = 50;
    this->Attack_Damage = 20;
    std::cout<<RED;
    std::cout<<"ScavTrap "<<this->get_name()<<" it's ready"<<std::endl;
    std::cout<<RESET;
}

ScavTrap::~ScavTrap()
{
    std::cout<<RED;
    std::cout<<"ScavTrap "<<this->get_name()<<" it's Died"<<std::endl;
    std::cout<<RESET;
}