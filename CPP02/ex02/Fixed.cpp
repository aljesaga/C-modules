#include "Fixed.hpp"

int     Fixed::getRawBits() const
{
    return (this->point_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->point_value = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)this->getRawBits() / (float)(1<<this->constant));
}

int     Fixed::toInt(void) const
{
    return (this->point_value >> this->constant);
}

Fixed& Fixed::max(Fixed& one, Fixed& two)
{
    if (one.point_value > two.point_value)
        return (one);
    else
        return (two);
}

Fixed const& Fixed::max(Fixed const& one, Fixed const& two)
{
    if (one.point_value > two.point_value)
        return (one);
    else
        return (two);
}

Fixed& Fixed::min(Fixed& one, Fixed& two)
{
    if (one.point_value < two.point_value)
        return (one);
    else
        return (two);
}

Fixed const& Fixed::min(Fixed const& one, Fixed const& two)
{
    if (one.point_value < two.point_value)
        return (one);
    else
        return (two);
}

Fixed& Fixed::operator++()
{
    this->point_value += 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed out(*this);
    this->point_value += 1;
    return (out);
}

Fixed& Fixed::operator--()
{
    this->point_value -= 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed out(*this);
    this->point_value -=1;
    return (out);
}

void Fixed::operator=(const Fixed &fix)
{
    this->point_value = fix.getRawBits();
}

Fixed::Fixed()
{
    this->point_value = 0;
}

Fixed::Fixed(Fixed &fix)
{
    this->point_value = fix.getRawBits();
}

Fixed::Fixed(const int num)
{
    this->point_value = num * (1<<this->constant);
}

Fixed::Fixed(const float num)
{
    this->point_value = num * (1 << this->constant);
}

Fixed::~Fixed()
{
    return ;
}

std::ostream &operator<<(std::ostream& point, const Fixed& fix)
{
    point << fix.toFloat();
    return (point);
}