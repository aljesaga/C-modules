/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:56:39 by alsanche          #+#    #+#             */
/*   Updated: 2023/05/17 18:19:28 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string  type)
{
    this->_type = type;
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

std::string Weapon::getType()
{
    return(this->_type);
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}
