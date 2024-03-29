/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:23:37 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/05 18:21:04 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound() const
{
     std::cout<<"GOUF GOUF 🐶"<<std::endl;
}

void Dog::operator=(Dog& cpy) const
{
    *this = cpy;
}

Dog::Dog(std::string type): Animal(type)
{
    std::cout<<"Dog constructor called"<<std::endl;
}

Dog::Dog(const Dog& cpy): Animal()
{
    std::cout<<"Dog copy constructor called"<<std::endl;
    this->set_type(cpy.get_type());
}

Dog::Dog(): Animal("Dog")
{
    std::cout<<"Dog default constructor called"<<std::endl;
}

Dog::~Dog()
{
    std::cout<<"Dog destructor called"<<std::endl;
}
