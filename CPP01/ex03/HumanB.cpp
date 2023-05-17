/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:27:22 by alsanche          #+#    #+#             */
/*   Updated: 2023/05/17 18:15:25 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string ID)
{
    this->name = ID;
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon arm)
{
    this->_weapon = &arm;
}

void    HumanB::attack(void)
{
    std::cout<<this->name<<" attacks with their "<<this->_weapon->getType()<<std::endl;
}
