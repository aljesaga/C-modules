#include "Zombie.hpp"

int main(void)
{
    Zombie  Viego("Viego");
    Zombie  *Thresh;

    Viego.announce();

    Thresh = newZombie("Thresh");
    Thresh->announce();
    randomChump("Senna");
    delete(Thresh);

    return (0);
}