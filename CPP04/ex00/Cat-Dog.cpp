/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat-Dog.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:23:37 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/01 14:56:15 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat-Dog.hpp"

void Dog::operator=(Dog& cpy) const
{
    *this = cpy;
}

Dog::Dog(std::string type): Animal(type)
{
}

Dog::Dog(const Dog& cpy): Animal()
{
    this->set_type(cpy.get_type());
}

Dog::Dog(): Animal("Dog")
{
}

Dog::~Dog()
{
}

void Cat::operator=(Cat& cpy) const
{
    *this = cpy;
}

Cat::Cat(std::string type): Animal(type)
{
}

Cat::Cat(const Cat& cpy): Animal()
{
    this->set_type(cpy.get_type());
}

Cat::Cat(): Animal("Cat")
{
}

Cat::~Cat()
{
}
