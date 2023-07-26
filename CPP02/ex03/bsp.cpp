#include "Point.hpp"


float   get_area(Point PA, Point PB, Point PC)
{
    float  AB_x, AB_y, AC_x, AC_y, Area;

    AB_y = (PB.getFixedValue('Y') - PA.getFixedValue('Y'));
    AC_x = (PC.getFixedValue('X') - PA.getFixedValue('X'));
    AC_y = (PC.getFixedValue('Y') - PA.getFixedValue('Y'));
    AB_x = (PB.getFixedValue('X') - PA.getFixedValue('X'));

    Area = ((AB_x * AC_y) - (AB_y * AC_x));
    if (Area < 0)
        Area *= -1;
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