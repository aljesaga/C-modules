#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iomanip>
#include <iostream>

class ClapTrap
{
    protected:
        std::string     Name;
        unsigned int    Hit_Points;
        unsigned int    Energy_Points;
        unsigned int    Attack_Damage;
        
    public:
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    set_value(unsigned int x, int arv);
        void    set_Name(std::string ID);
        std::string   get_name();
        unsigned int  get_value(int arv);

        ClapTrap operator=(ClapTrap const &cpy);        
        ClapTrap(ClapTrap const &cpy);
        ClapTrap(std::string ID);
        ClapTrap();
        ~ClapTrap();
};

#endif