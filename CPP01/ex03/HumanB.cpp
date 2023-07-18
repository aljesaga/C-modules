/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:27:22 by alsanche          #+#    #+#             */
/*   Updated: 2023/07/18 12:32:10 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string ID):_weapon(NULL)
{
    this->_name = ID;
    return ;
}

HumanB::~HumanB()
{
    return ;
}

void    HumanB::setWeapon(Weapon& arm)
{
    this->_weapon = &arm;
}

void    HumanB::attack(void)
{
    if (this->_weapon)
        std::cout<<this->_name<<" attacks with their "<<this->_weapon->getType()<<std::endl;
    else
        std::cout<<this->_name<<"run for your life"<<std::endl;
}
