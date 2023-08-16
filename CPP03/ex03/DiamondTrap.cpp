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
    std::cout<<"Hit_Points: "<<this->Hit_Points<<std::endl;
    std::cout<<"Energy_Points: "<<this->Energy_Points<<std::endl;
    std::cout<<"Attack_Damage: "<<this->Attack_Damage<<std::endl;
    std::cout<<"My ClapTrap Name is "<<ClapTrap::get_name()<<std::endl;
    std::cout<<RESET;
}

void DiamondTrap::operator=(DiamondTrap const &cpy)
{
    this->Name = cpy.Name;
    ClapTrap::set_Name(cpy.Name);
    ClapTrap::Name.append("_clap_name");
    this->Hit_Points = cpy.Hit_Points;
    this->Energy_Points = cpy.Energy_Points;
    this->Attack_Damage = cpy.Attack_Damage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &cpy): FragTrap(cpy.Name), ScavTrap(cpy.Name)
{
    this->Name = cpy.Name;
    ClapTrap::set_Name(ClapTrap::Name.append("_clap_name"));
    std::cout<<"DiamondTrap "<<this->Name<<" Copy constructor called"<<std::endl;
}

DiamondTrap::DiamondTrap(std::string ID): FragTrap(ID), ScavTrap(ID)
{
    this->Name = ID;
    ClapTrap::set_Name(ClapTrap::Name.append("_clap_name"));
    this->Hit_Points = FragTrap::get_value(0);
    this->Energy_Points = ScavTrap::get_value(1);
    this->Attack_Damage = FragTrap::get_value(2);
    std::cout<<"DiamondTrap "<<this->Name<<" appears in combat"<<std::endl;
}

DiamondTrap::DiamondTrap(): FragTrap(), ScavTrap()
{
    this->Name = "Darth Vader";
    ClapTrap::set_Name(ClapTrap::Name.append("_clap_name"));
    this->Hit_Points = FragTrap::get_value(0);
    this->Energy_Points = ScavTrap::get_value(1);
    this->Attack_Damage = FragTrap::get_value(2);
    std::cout<<"DiamondTrap "<<this->Name<<" appears in combat"<<std::endl;
}

DiamondTrap::~DiamondTrap()
{
     std::cout<<"DiamondTrap "<<this->Name<<" die in the lava"<<std::endl;
}
