#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>

class Point
{
    private:
        Fixed X;
        Fixed Y;
    
    public:
        Point();
        Point(const Point& cpy);
        Point(float const tx, float const ty);
        ~Point();

        void    setFixed(Fixed& set, char Z);
        float   getFixedValue(char Z) const;
        Point&  operator=(Point& cpy);
        const Point& operator=(Point const& cpy);
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif