/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:23:37 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/29 12:51:59 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound() const
{
     std::cout<<"GOUF GOUF 🐶"<<std::endl;
}

Brain* Dog::get_idea()
{
    return (this->attribute);
}

void Dog::operator=(Dog& cpy) const
{
    *this = cpy;
}

Dog::Dog(std::string type): A_Animal()
{
    std::cout<<"Dog constructor called"<<std::endl;
    this->set_type(type);
    this->attribute = new Brain();
}

Dog::Dog(const Dog& cpy): A_Animal()
{
    std::cout<<"Dog copy constructor called"<<std::endl;
    this->set_type(cpy.get_type());
    this->attribute = cpy.attribute;
}

Dog::Dog(): A_Animal()
{
    std::cout<<"Dog default constructor called"<<std::endl;
    this->set_type("Dog");
    this->attribute = new Brain();
}

Dog::~Dog()
{
    std::cout<<"Dog destructor called"<<std::endl;
    delete this->attribute;
}
