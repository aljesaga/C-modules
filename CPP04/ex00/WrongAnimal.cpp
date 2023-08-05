/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:41:14 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/05 18:42:30 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void    WrongAnimal::operator=(WrongAnimal &cpy)
{
    this->type = cpy.get_type();
}

void WrongAnimal::set_type(std::string _type)
{
    this->type = _type;
}

std::string WrongAnimal::get_type() const
{
    return(this->type);
}

void WrongAnimal::makeSound() const
{
     std::cout<<"WrongAnimal:: Unknown Sound"<<std::endl;
}

WrongAnimal::WrongAnimal(std::string _type)
{
    this->type = _type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
    this->type = cpy.get_type();
}

WrongAnimal::WrongAnimal()
{
    this->type = "Unknown species";
}

WrongAnimal::~WrongAnimal()
{
}