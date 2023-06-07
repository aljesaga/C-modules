#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
    public:
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        void    operator=(Fixed const& fix);
        float   toFloat(void) const;
        int     toInt(void) const;
        Fixed();
        Fixed(Fixed& fix);
        Fixed(const int num);
        Fixed(const float num);
        ~Fixed();

    private:
        int point_value;
        static const int constant = 8;
};

std::ostream& operator<<(std::ostream& point, Fixed& fix);

#endif