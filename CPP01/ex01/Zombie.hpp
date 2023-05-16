#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
	public:
			Zombie();
			~Zombie();

            void    announce(void);
            void    setZombie(std::string name);

    private:
			std::string name;
};

    Zombie  *zombieHorde(int N, std::string name);

#endif