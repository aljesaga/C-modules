
#include "ClapTrap.hpp"

void    ClapTrap::attack(const std::string& target)
{
    if (this->get_value(1) > 0)
    {
        std::cout<<this->Name<<" attacks whit "<<target<<" Causing ";
        std::cout<<this->Attack_Damage<<" points of damage"<<std::endl;
        this->Energy_Points--;
    }
    else
        std::cout<<this->Name<<" is too tired to attack"<<std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout<<this->Name<<" take "<<amount<<" of damage"<<std::endl;
    this->Hit_Points -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Hit_Points == 10)
        std::cout<<this->Name<<" has a full life"<<std::endl;
    else if (this->Energy_Points <= 0)
        std::cout<<this->Name<<" does not have energy to repair"<<std::endl;
    else
    {
    this->Hit_Points++;
    std::cout<<this->Name<<" it repairs itself his hit points are now "<<this->Hit_Points<<std::endl;
    }
}

void    ClapTrap::set_value(unsigned int x, int arv)
{
    if (arv == 0)
        this->Hit_Points = x;
    else if (arv == 1)
        this->Energy_Points = x;
    else if (arv == 2)
        this->Attack_Damage = x;
}

std::string ClapTrap::get_name()
{
    return (this->Name);
}

unsigned int ClapTrap::get_value(int arv)
{
    if (arv == 0)
        return (this->Hit_Points);
    else if (arv == 1)
        return (this->Energy_Points);
    else if (arv == 2)
        return (this->Attack_Damage);
    else
        return (42);
}

void ClapTrap::operator=(ClapTrap const &cpy)
{
    this->Name = cpy.Name;
    this->Hit_Points = cpy.Hit_Points;
    this->Energy_Points = cpy.Energy_Points;
    this->Attack_Damage = cpy.Attack_Damage;
}

ClapTrap::ClapTrap(ClapTrap const &cpy)
{
    *this = cpy;
    this->Name.append("_Copy");
    std::cout<<"Clone Constructor Called"<<std::endl;
}

ClapTrap::ClapTrap(std::string  ID)
{
    this->Name = ID;
    this->Hit_Points = 10;
    this->Energy_Points = 10;
    this->Attack_Damage = 0;
    std::cout<<this->Name<<" It has been created"<<std::endl;
}

ClapTrap::ClapTrap()
{
    this->Name = "Practice Bot";
    this->Hit_Points = 10;
    this->Energy_Points = 10;
    this->Attack_Damage = 0;
    std::cout<<"Practice Bot It has been created"<<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout<<this->Name<<" Has Died"<<std::endl;
}
