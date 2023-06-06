#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        void    operator=(Fixed& fix);
        Fixed();
        Fixed(Fixed& fix);
        ~Fixed();

    private:
        int point_value;
        static const int constant = 8;
};

#endif