#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
}

AMateria::AMateria(AMateria const & cpy)
{
    *this = cpy;
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

