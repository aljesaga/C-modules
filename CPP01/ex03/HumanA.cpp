/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:13:14 by alsanche          #+#    #+#             */
/*   Updated: 2023/07/18 12:28:58 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string ID, Weapon &weapon):_weapon(weapon)
{
    this->_name = ID;
    return ;
}

HumanA::~HumanA()
{
    return ;
}

void    HumanA::attack()
{
    std::cout<<this->_name<<" attacks with their "<<this->_weapon.getType()<<std::endl;
}
