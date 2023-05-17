/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:13:14 by alsanche          #+#    #+#             */
/*   Updated: 2023/05/17 18:15:23 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(void)
{
}

HumanA::HumanA(std::string ID, Weapon arm)
{
    this->name = ID;
    this->_weapon = &arm;
}

HumanA::~HumanA()
{
}

void    HumanA::attack(void)
{
    std::cout<<this->name<<" attacks with their "<<this->_weapon->getType()<<std::endl;
}
