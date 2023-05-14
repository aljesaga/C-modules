#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
	public:
            void    announce(void);
            Zombie  *newZombie(std::string name);
            void    randomChump(std::string name);
			Zombie();
			~Zombie();

    private:
			std::string name;
};

#endif