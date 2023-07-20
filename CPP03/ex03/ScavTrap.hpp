#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

#define YELLOW "\e[0;33m";
#define RED    "\e[0;31m";
#define GREEN  "\e[0;32m";
#define CYAN   "\e[0;36m";
#define RESET  "\e[0m";

class ScavTrap: public ClapTrap
{
    public:

        void    attack(const std::string& target);
        void    guardGate();
        ScavTrap(std::string ID);
        ScavTrap();
        ~ScavTrap();
};

#endif