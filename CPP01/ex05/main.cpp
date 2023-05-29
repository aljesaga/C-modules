#include "Harl.hpp"

int main()
{
    std::string _line;
    Harl    test;

    while(1)
    {
        std::cout<<"Enter a command :: ";
        std::getline(std::cin, _line);
        test.complain(_line);
        if (_line == "exit")
            break ;
    }
    return (0);
}