/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:05:20 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/19 10:10:38 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string Brain::get_idea(int x)
{
    if (x >= 100)
        x = x % 100;
    return (this->ideas[x]);
}
void Brain::set_idea(std::string str, int x)
{
    if (x >= 100)
        x = x % 100;
    this->ideas[x] = str;
}

Brain    &Brain::operator=(Brain const & cpy)
{
    for(int i = 0; i < 100; i++)
        this->set_idea(cpy.ideas[i], i);
    return (*this);
}

Brain::Brain(Brain const & cpy)
{
    *this = cpy;
    std::cout<<"Brain: Copy constructor called"<<std::endl;
}

Brain::Brain()
{
    std::cout<<"Brain: the hamster is running"<<std::endl;
}

Brain::~Brain()
{
    std::cout<<"Brain: the hamster go to sleep"<<std::endl;
}