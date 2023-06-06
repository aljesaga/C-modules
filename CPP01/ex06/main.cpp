#include "Harl.hpp"

int main(int arc, char **arv)
{
    std::string _line;
    Harl    test;
    if (arc == 2)
    {
        _line = arv[1];
        test.complain(_line);
    }
    return (0);
}