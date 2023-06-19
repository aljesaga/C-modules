#include "ClapTrap.hpp"

void    ClapTrap::attack(const std::string& target)
{
    std::cout<<this->Name<<" attacks "<<target<<" Causing ";
    std::cout<<this->Attack_Damage<<" points of damage"<<std::endl;
    this->Energy_Points--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout<<this->Name<<" take "<<amount<<" of damage"<<std::endl;
    this->Hit_points -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    this->Hit_Points++;
    std::cout<<this->Name<<" it repairs itself his hit points are now "<<this->Hit_Points<<std::endl;
}

ClapTrap::ClapTrap(std::string  ID)
{
    this->Name = ID;
    this->Hit_Points = 10;
    this->Energy_Points = 10
    this->Attack_Damage = 0;
}

ClapTrap::~ClapTrap()
{
}

void    ClapTrap::attack(const std::string& traget)
{
    
}