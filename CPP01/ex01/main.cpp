/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:18:13 by alsanche          #+#    #+#             */
/*   Updated: 2023/05/17 13:18:14 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie one;
    Zombie *horder;

    one.setZombie("Hecarim");
    one.announce();
    horder = zombieHorde(6, "minion");
    delete [] horder;

    return (0);
}