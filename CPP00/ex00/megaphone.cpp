/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:19:09 by alsanche          #+#    #+#             */
/*   Updated: 2023/02/16 19:38:10 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void upper(char *arv)
{
    size_t size;

    size = strlen(arv);
    for(int i=0;i<size;i++)
        arv[i] = toupper(arv[i]);
}

int main(int arc, char *arv[])
{
    if (arc == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        for(int i=1;i<arc;i++)
        {
            upper(arv[i]);
            std::cout<<arv[i];
            if (i < arc - 1)
                std::cout<<" ";
        }
        std::cout<<"\n";
    }

    return (0);
}