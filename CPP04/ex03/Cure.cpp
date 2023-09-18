/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:38:47 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/18 13:33:29 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

void    Cure::use(ICharacter & target)
{
    std::cout<<"* heals "<<target.getName()<<"`s wounds *"<<std::endl;
}

Cure::Cure(Cure const& cpy): AMateria(cpy.getType())
{
}

Cure::Cure(): AMateria("cure")
{
}

Cure::~Cure()
{
}

AMateria *Cure::clone() const
{
    return (new Cure());
}

Cure &Cure::operator=(Cure const& cpy)
{
    if (this != &cpy)
        *this = cpy;
    return (*this);
}