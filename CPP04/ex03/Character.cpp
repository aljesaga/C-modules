/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:28:58 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/06 13:47:13 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string id)
{
    this->Name = id;
}

Character::Character(Character const& cpy)
{
    *this = cpy;
}

Character::Character()
{
    this->Name = "Shinra soldier";
}

Character::~Character()
{
    delete[] slots;
}

std::string const & Character::getName() const
{
    return (this->Name);
}

void Character::equip(AMateria *m)
{
    int i = -1;
    
    while(++i < 4)
    {
        if (this->slots[i] == NULL)
        {
            slots[i] = m;
            std::cout<<this->getName()<<" Equip materia "<<m->getType()<<" in slots "<<i<<std::endl;
            break ;
        }
    }
}

