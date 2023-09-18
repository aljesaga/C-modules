/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pyro.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:38:47 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/18 13:50:32 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pyro.hpp"

void    Pyro::use(ICharacter & target)
{
     std::cout<<"* shoots an fire bolt at "<<target.getName()<<" *"<<std::endl;
}

Pyro::Pyro(Pyro const& cpy): AMateria(cpy.getType())
{
}

Pyro::Pyro(): AMateria("pyro")
{
}

Pyro::~Pyro()
{
}

AMateria *Pyro::clone() const
{
    return (new Pyro());
}

Pyro &Pyro::operator=(Pyro const& cpy)
{
    if (this != &cpy)
        *this = cpy;
    return (*this);
}