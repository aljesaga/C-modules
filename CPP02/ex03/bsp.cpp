#include "Point.hpp"

float   get_area(Point PA, Point PB, Point PC)
{
    float  P1, P2, P3, Area;

    P1 = (PA.getFixedValue('X') * (PB.getFixedValue('Y') - PC.getFixedValue('y')));
    P2 = (PB.getFixedValue('X') * (PC.getFixedValue('Y') - PA.getFixedValue('y')));
    P3 = (PC.getFixedValue('X') * (PA.getFixedValue('Y') - PB.getFixedValue('y')));

    Area = ((P1 + P2 + P3) / 2);
    return (Area);
}

bool    bsp(Point const a, Point const b, Point const c, Point const p)
{
    float   triangle, tri_p1, tri_p2, tri_p3, total;

    triangle = get_area(a, b, c);
    tri_p1 = get_area(a, b, p);
    tri_p2 = get_area(b, c, p);
    tri_p3 = get_area(c, a, p);
    total = tri_p1 + tri_p2 + tri_p3;

    if (triangle == 0.0f || tri_p1 == 0.0f || tri_p2 == 0.0f || tri_p3 == 0.0f)
        return (false);
    else if (total == triangle)
        return (true);
    return (false);
}