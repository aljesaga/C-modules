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
        float   toFloat(void) const;
        int     toInt(void) const;
        static Fixed&  max(Fixed& one, Fixed& two);
        static Fixed const&  max(Fixed const& one, Fixed const& two);
        static Fixed&  min(Fixed& one, Fixed& two);
        static Fixed const&  min(Fixed const& one, Fixed const& two);


        bool    operator<(Fixed const& fix) const;
        bool    operator>(Fixed const& fix) const;
        bool    operator<=(Fixed const& fix) const;
        bool    operator>=(Fixed const& fix) const;
        bool    operator==(Fixed const& fix) const;
        bool    operator!=(Fixed const& fix) const;
        Fixed   operator+(Fixed const& fix) const;
        Fixed   operator-(Fixed const& fix) const;
        Fixed   operator*(Fixed const& fix) const;
        Fixed   operator/(Fixed const& fix) const;
        Fixed&  operator++();
        Fixed   operator++(int);
        Fixed&  operator--();
        Fixed   operator--(int);  
        void    operator=(Fixed const& fix);

        Fixed();
        Fixed(const Fixed& fix);
        Fixed(const int num);
        Fixed(const float num);
        ~Fixed();

    private:
        int point_value;
        static const int constant = 8;
};

std::ostream& operator<<(std::ostream& point, const Fixed& fix);

#endif