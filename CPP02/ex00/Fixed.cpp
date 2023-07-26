#include "Fixed.hpp"

void    Fixed::setRawBits(int const raw)
{
    this->point_value = raw;
}

int     Fixed::getRawBits() const
{
    std::cout<<"getRawBits member funtion called"<<std::endl;
    return (this->point_value);
}

Fixed::Fixed()
{
    std::cout<<"Default constructor called"<<std::endl;
    this->point_value = 0;
}

Fixed::Fixed(Fixed &fix)
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = fix;
}

void Fixed::operator=(Fixed &fix)
{
    std::cout<<"Assignation operator called"<<std::endl;
    this->point_value = fix.getRawBits();
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
    return ;
}