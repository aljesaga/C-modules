/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:25:10 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/19 10:45:47 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal    &Animal::operator=(Animal const &cpy)
{
    this->type = cpy.get_type();
    return (*this);
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
    std::cout<<"Animal constructor called"<<std::endl;
    this->type = _type;
}

Animal::Animal(const Animal& cpy)
{
    std::cout<<"Animal copy constructor called"<<std::endl;
    this->type = cpy.get_type();
}

Animal::Animal()
{
    std::cout<<"Animal default constructor called"<<std::endl;
    this->type = "Unknown species";
}

Animal::~Animal()
{
    std::cout<<"Animal destructor called"<<std::endl;
}