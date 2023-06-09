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

void Fixed::operator=(const Fixed &fix)
{
    std::cout<<"Assignation operator called"<<std::endl;
    this->point_value = fix.getRawBits();
}

Fixed::Fixed()
{
    std::cout<<"Default constructor called"<<std::endl;
    this->point_value = 0;
}

Fixed::Fixed(Fixed &fix)
{
    std::cout<<"Copy constructor called"<<std::endl;
    this->point_value = fix.getRawBits();
}

Fixed::Fixed(const int num)
{
    std::cout<<"Int constructor called"<<std::endl;
    this->point_value = num * (1<<this->constant);
}

Fixed::Fixed(const float num)
{
    std::cout<<"float constructor called"<<std::endl;
    this->point_value = num * (1 << this->constant);
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
    return ;
}

std::ostream &operator<<(std::ostream& point, const Fixed& fix)
{
    point << fix.toFloat();
    return (point);
}