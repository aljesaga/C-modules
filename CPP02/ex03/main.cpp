#include "Point.hpp"

int main(void)
{
   Point a(0.0f, 1.0f);
   Point b(-1.0f, -1.0f);
   Point c(1.0f, -1.0f);
   Point p(0.49f, 0.0f);

    if (bsp(a, b, c, p))
        std::cout<<"It's TRUE"<<std::endl;
    else
        std::cout<<"It's False"<<std::endl;

    return (0);
}