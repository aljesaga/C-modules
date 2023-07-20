#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap 
{
    private:
        std::string Name;

    public:
        std::string get_Diamon_name(void);
        void    set_Diamon_name(std::string name);
        void    whoAmI();
        using    ScavTrap::attack;
        
        DiamondTrap(std::string ID);
        DiamondTrap();
        ~DiamondTrap();

};

#endif