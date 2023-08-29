/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:25:10 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/29 12:39:05 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void A_Animal::set_type(std::string _type)
{
    this->type = _type;
}

std::string A_Animal::get_type() const
{
    return(this->type);
}

void A_Animal::makeSound() const
{
     std::cout<<"Unknown Sound"<<std::endl;
}

/*void    A_Animal::operator=(A_Animal &cpy)
{
    this->type = cpy.get_type();
}

A_Animal::A_Animal(std::string _type)
{
    std::cout<<"A_Animal constructor called"<<std::endl;
    this->type = _type;
}

A_Animal::A_Animal(const A_Animal& cpy)
{
    std::cout<<"A_Animal copy constructor called"<<std::endl;
    this->type = cpy.get_type();
}

A_Animal::A_Animal()
{
    std::cout<<"A_Animal default constructor called"<<std::endl;
    this->type = "Unknown species";
}*/

A_Animal::~A_Animal()
{
    std::cout<<"A_Animal destructor called"<<std::endl;
}
