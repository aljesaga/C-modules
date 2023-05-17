/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:17:31 by alsanche          #+#    #+#             */
/*   Updated: 2023/05/17 13:17:56 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  Viego("Viego");
    Zombie  *Thresh;

    Viego.announce();

    Thresh = newZombie("Thresh");
    Thresh->announce();
    randomChump("Senna");
    delete(Thresh);

    return (0);
}