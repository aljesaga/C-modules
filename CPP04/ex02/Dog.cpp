/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:23:37 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/19 11:16:50 by alsanche         ###   ########lyon.fr   */
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

Dog &Dog::operator=(Dog const & cpy)
{
    this->attribute = new Brain(*cpy.attribute);
    this->type = cpy.get_type();
    return (*this);
}

Dog::Dog(std::string type): AAnimal()
{
    std::cout<<"Dog constructor called"<<std::endl;
    this->set_type("Dog");
    this->attribute = new Brain();
}

Dog::Dog(const Dog& cpy): AAnimal()
{
    std::cout<<"Dog copy constructor called"<<std::endl;
    this->set_type(cpy.get_type());
    this->attribute = new Brain(*cpy.attribute);
}

Dog::Dog(): AAnimal()
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
