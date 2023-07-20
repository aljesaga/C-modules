#include "DiamondTrap.hpp"

std::string DiamondTrap::get_Diamon_name(void)
{
    return (this->Name);
}

void    DiamondTrap::set_Diamon_name(std::string ID)
{
    this->Name = ID;
}

void    DiamondTrap::whoAmI()
{
    std::cout<<RED;
    std::cout<<"DiamondTrap My Name is "<<this->Name<<std::endl;
    std::cout<<"Hit_Points: "<<this->get_value(0)<<std::endl;
    std::cout<<"Energy_Points: "<<this->get_value(1)<<std::endl;
    std::cout<<"Attack_Damage: "<<this->get_value(2)<<std::endl;
    std::cout<<"and I am your father"<<std::endl;
    std::cout<<RESET;
}

DiamondTrap::DiamondTrap(std::string ID): FragTrap(ID), ScavTrap(ID)
{
    this->Name = ID;
    this->ClapTrap::set_Name(this->_Name.append("_clap_name"));
    this->Hit_Points = FragTrap::get_value(0);
    this->Energy_Points = ScavTrap::get_value(1);
    this->Attack_Damage = FragTrap::get_value(2);
    std::cout<<"DiamondTrap "<<this->Name<<" appears in combat"<<std::endl;
}

DiamondTrap::DiamondTrap(): FragTrap(), ScavTrap()
{
    this->Name = "Darth Vader";
    this->ClapTrap::set_Name(this->Name.append("_clap_name"));
    this->Hit_Points = FragTrap::get_value(0);
    this->Energy_Points = ScavTrap::get_value(1);
    this->Attack_Damage = FragTrap::get_value(2);
    std::cout<<"DiamondTrap "<<this->Name<<" appears in combat"<<std::endl;
}

DiamondTrap::~DiamondTrap()
{
     std::cout<<"DiamondTrap "<<this->Name<<" die in the lava"<<std::endl;
}
