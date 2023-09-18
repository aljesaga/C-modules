/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:55:13 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/18 13:13:45 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

MateriaSource::MateriaSource(MateriaSource const & cpy)
{
    *this = cpy;
}

MateriaSource::MateriaSource(): IMateriaSource()
{
    for(int i = 0; i < 4; ++i)
        this->slots[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; ++i)
        if (this->slots[i])
            delete this->slots[i];
}

void    MateriaSource::learnMateria(AMateria *m)
{
    for(int i = 0; i < 4; ++i)
    {
        if (this->slots[i] == NULL)
        {
            this->slots[i] = m;
            break ;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for(int i = 0; i < 4; ++i)
    {
        if (this->slots[i] && type == this->slots[i]->getType())
            return (this->slots[i]->clone());
    }
    return (NULL);
}

MateriaSource &MateriaSource::operator=(MateriaSource const & cpy)
{
    if (this != &cpy)
        *this = cpy;
    return (*this);
}