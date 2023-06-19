#include "Point.hpp"

int main(void)
{
   Point a(8.0f, 3.0f);
   Point b(13.0f, -2.0f);
   Point c(2.0f, -2.0f);
   Point p(10.5f, 0.5f);

    if (bsp(a, b, c, p) == true)
        std::cout<<"It's TRUE"<<std::endl;
    else
        std::cout<<"It's False"<<std::endl;

    return (0);
}