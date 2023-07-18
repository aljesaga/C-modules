/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:38:15 by alsanche          #+#    #+#             */
/*   Updated: 2023/07/18 13:10:27 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Mixer.hpp"

int main(int arc, char** arv)
{
    if (arc == 4)
    {
        Mixer prueba(arv[1], arv[2], arv[3]);
        prueba.get_text();
    }
    else
        std::cout<<"worng arguments"<<std::endl;
    return (0);
}