#include "Point.hpp"

int main(void)
{
   Point a(-5, -4);
   Point b(1, 6);
   Point c(9, -2);
   Point p(2, 4);

    if (bsp(a, b, c, p))
        std::cout<<"It's TRUE"<<std::endl;
    else
        std::cout<<"It's False"<<std::endl;

    return (0);
}