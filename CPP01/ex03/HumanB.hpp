/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:31:31 by alsanche          #+#    #+#             */
/*   Updated: 2023/05/17 18:15:25 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
    public:
    
        void    setWeapon(Weapon &arm);
        void    attack(void);
        HumanB(std::string ID);
        ~HumanB();

    private:

        std::string _name;
        Weapon *_weapon;
        
};

#endif