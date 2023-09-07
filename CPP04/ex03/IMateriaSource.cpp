/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:55:13 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/07 19:37:51 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Library.hpp"

MateriaSource::MateriaSource(MateriaSource const & cpy)
{
    *this = cpy;
}

MateriaSource::MateriaSource(AMateria* m): IMAteriaSource()
{
    this->slots[0] = m;
}

MateriaSource::MateriaSource(): IMateriaSource()
{
}

MateriaSource::~MateriaSource()
{
    delete[] this->slots;
}

void    MateriaSource::learMateria(AMateria* m)
{
    for(int i = 0; i < 4; ++i)
    {
        if (this->slots[i] != NULL)
        {
            this->slots[i] = m;
            break ;
        }
    }
}

AMateria *createMateria(std::string const &type)
{
    AMateria* new(type);
    return (new);
}