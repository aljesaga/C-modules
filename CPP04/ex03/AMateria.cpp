/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:35:54 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/19 11:37:39 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & id)
{
    this->type = id;
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
    return (this->type);
}

void    AMateria::use(ICharacter & target)
{
}

AMateria& AMateria::operator=(AMateria const & cpy)
{
    if (this->getType() != cpy.getType())
        *this = cpy;
    return (*this);
}