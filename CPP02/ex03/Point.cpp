#include "Point.hpp"

Point::Point(): X(0), Y(0)
{
}

Point::Point(const Point& cpy)
{
    this->X = cpy.X;
    this->Y = cpy.Y;
}

Point::Point(float const tx, float const ty)
{
    X.setRawBits(tx);
    Y.setRawBits(ty);
}

Point::~Point()
{
}

void    Point::setFixed(Fixed& set, char Z)
{
    if (Z == 'X')
        this->X = set;
    else if (Z == 'Y')
        this->Y = set;
    else
        std::cout<<"Fixed not assigned invalid char"<<std::endl;
}

float   Point::getFixedValue(char Z) const
{
    if (Z == 'Y')
        return (this->Y.toFloat());
    return (this->X.toFloat());
}

Point& Point::operator=(Point& cpy)
{
    return (cpy);
}

const Point& Point::operator=(Point const& cpy)
{
    return (cpy);
}
