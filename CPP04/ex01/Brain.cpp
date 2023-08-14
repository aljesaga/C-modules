#include "Brain.hpp"

std::string Brain::get_idea(int x)
{
    if (x >= 100)
        x = x % 100;
    return (this->ideas[x]);
}
void Brain::set_idea(std::string str, int x)
{
    if (x >= 100)
        x = x % 100;
    this->ideas[x] = str;
}

void    Brain::operator=(const Brain& cpy)
{
    for(int i = 0; i < 100; i++)
        this->set_idea(cpy.ideas[i], i);
}

Brain::Brain(const Brain& cpy)
{
    *this = cpy;
    std::cout<<"Brain: Copy constructor called"<<std::endl;
}

Brain::Brain()
{
    std::cout<<"Brain: the hamster is running"<<std::endl;
}

Brain::~Brain()
{
    std::cout<<"Brain: the hamster go to sleep"<<std::endl;
}