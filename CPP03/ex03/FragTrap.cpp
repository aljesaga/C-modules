#include "FragTrap.hpp"

void    FragTrap::operator=(FragTrap const &cpy)
{
    this->Name = cpy.Name;
    this->Attack_Damage = cpy.Attack_Damage;
    this->Hit_Points = cpy.Hit_Points;
    this->Energy_Points = cpy.Energy_Points;
}

FragTrap::FragTrap(FragTrap const &cpy): ClapTrap(cpy.Name)
{
    *this = cpy;
    this->Name.append("_clone");
    std::cout<<YELLOW;
    std::cout<<"FragTrap Copy cnstructor called"<<std::endl;
    std::cout<<RESET;
}

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