#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        std::string get_idea(int x);
        void set_idea(std::string str, int x);
        
        void operator=(Brain const &cpy);
        Brain(const Brain &cpy);
        Brain();
        virtual ~Brain();
        std::string ideas[100];
};

#endif