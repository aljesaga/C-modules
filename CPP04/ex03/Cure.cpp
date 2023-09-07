/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:38:47 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/07 17:56:14 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Library.hpp"

void    Cure::use(ICharacter & target)
{
    std::cout<<"* heals "<<target.getName()<<"`s wounds *"<<std::endl;
}

Cure::Cure(std::string tpy): AMateria(tpy)
{
}

Cure::Cure(Cure const& cpy): AMateria(cpy.getType())
{
}

Cure::Cure(): AMateria("Cure")
{
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const& cpy)
{
    if (this != &cpy)
        *this = cpy;
    return (*this);
}