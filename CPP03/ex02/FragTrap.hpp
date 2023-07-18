#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

#define YELLOW "\e[0;33m";
#define RED    "\e[0;31m";
#define GREEN  "\e[0;32m";
#define CYAN   "\e[0;36m";
#define RESET  "\e[0m";

class FragTrap: public ScavTrap
{
    public:
        FragTrap(std::string ID);
        FragTrap();
        ~FragTrap();
        void highFivesGuys(void);  
};

#endif