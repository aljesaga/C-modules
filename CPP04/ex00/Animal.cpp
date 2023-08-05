/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:25:10 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/05 18:08:10 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void    Animal::operator=(Animal &cpy)
{
    this->type = cpy.get_type();
}

void Animal::set_type(std::string _type)
{
    this->type = _type;
}

std::string Animal::get_type() const
{
    return(this->type);
}

void Animal::makeSound() const
{
     std::cout<<"Unknown Sound"<<std::endl;
}

Animal::Animal(std::string _type)
{
    this->type = _type;
}

Animal::Animal(const Animal& cpy)
{
    this->type = cpy.get_type();
}

Animal::Animal()
{
    this->type = "Unknown species";
}

Animal::~Animal()
{
}