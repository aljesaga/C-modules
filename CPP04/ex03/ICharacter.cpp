/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:28:58 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/07 18:56:17 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Library.hpp"

Character::Character(std::string id)
{
    this->Name = id;
}

Character::Character(Character const& cpy)
{
    *this = cpy;
    for(int i = 0; i < 4; i++)
        this->slots[i] = NULL;
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
    if (m)
    {
        while(++i < 4)
        {
            if (this->slots[i] == NULL)
            {
                slots[i] = m;
                std::cout<<this->getName()<<":: Equipped materia "<<m->getType()<<" in slots "<<i<<std::endl;
                break ;
            }
        }
        if (i == 4)
            std::cout<<this->getName()<<":: Inventory is full"<<std::endl;
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
    if (this->slots[idx] != NULL)
    {
        this->slots[idx]->use(target);
    }
}

Character& Character::operator=(Character const & cpy)
{
    if (this != &cpy)
    {
        *this = cpy;
        for(int i = 0; i < 4; i++)
            this->slots[i] = NULL;
    }
    return (*this); 
}