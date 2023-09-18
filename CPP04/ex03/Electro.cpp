/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Electro.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:38:47 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/18 13:50:32 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Electro.hpp"

void    Electro::use(ICharacter & target)
{
     std::cout<<"* shoot an electric lightning at "<<target.getName()<<" *"<<std::endl;
}

Electro::Electro(Electro const& cpy): AMateria(cpy.getType())
{
}

Electro::Electro(): AMateria("electro")
{
}

Electro::~Electro()
{
}

AMateria *Electro::clone() const
{
    return (new Electro());
}

Electro &Electro::operator=(Electro const& cpy)
{
    if (this != &cpy)
        *this = cpy;
    return (*this);
}