#include "ClapTrap.hpp"

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