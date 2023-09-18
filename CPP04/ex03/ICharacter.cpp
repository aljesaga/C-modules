/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:28:58 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/18 14:29:03 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

Character::Character(std::string id)
{
    this->Name = id;
    for(int i = 0; i < 4; ++i)
        this->slots[i] = NULL;
}

Character::Character(Character const& cpy)
{
    *this = cpy;
}

Character::Character()
{
    this->Name = "Shinra soldier";
    for(int i = 0; i < 4; ++i)
        this->slots[i] = NULL;
}

Character::~Character()
{
    for(int i = 0; i < 4; ++i)
        if (this->slots[i])
            delete this->slots[i];
}

std::string const & Character::getName() const
{
    return (this->Name);
}

void Character::equip(AMateria *m)
{
    if (!m)
        return;
    for(int i = 0; i < 4; ++i)
    {
        if (this->slots[i] == NULL)
        {
            this->slots[i] = m;
            std::cout<<this->getName()<<":: Equipped materia "<<m->getType()<<" in slots "<<i<<std::endl;
            break ;
        }
    }
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
    {
        if (this->slots[idx] != NULL)
        {    
            std::cout<<this->getName()<<":: Unequipped materia "<<this->slots[idx]->getType()<<std::endl;
            this->slots[idx] = NULL;
        }
        else
            std::cout<<this->getName()<<":: This slots is empty"<<std::endl;
    }
}

void    Character::use(int idx, ICharacter &target)
{
    if (this->slots[idx])
    {
        std::cout<<this->getName()<<":  ";
        this->slots[idx]->use(target);
    }
}

Character& Character::operator=(Character const & cpy)
{
    if (this != &cpy)
    {
        *this = cpy;
        for(int i = 0; i < 4; i++)
            this->slots[i] = cpy.slots[i];
    }
    return (*this); 
}