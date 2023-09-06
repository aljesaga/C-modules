/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:35:54 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/06 12:35:55 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

AMateria& AMateria::operator=(AMateria const & cpy)
{
    if (this->getType() != cpy.getType())
        *this = cpy;
    return (*this);
}