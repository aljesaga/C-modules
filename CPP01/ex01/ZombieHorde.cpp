/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:18:31 by alsanche          #+#    #+#             */
/*   Updated: 2023/05/17 13:18:32 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *horder;
    int     i;

    horder = new Zombie[N];
    for(i = 0; i < N; i++)
    {
        horder[i].setZombie(name);
        horder->announce();
    }
    return (horder);
}
