/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:07:53 by alsanche          #+#    #+#             */
/*   Updated: 2023/05/17 18:15:25 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
    private:
        std::string name;
        Weapon *_weapon;
        
    public:
        void    attack(void);
        HumanA(std::string ID, Weapon Weapon);
        HumanA(void);
        ~HumanA();
};

#endif