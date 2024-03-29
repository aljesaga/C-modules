/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:17:48 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/05 18:19:43 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound() const
{
     std::cout<<"MIAUUUUU MIAUUUU 🐱"<<std::endl;
}

void Cat::operator=(Cat& cpy) const
{
    *this = cpy;
}

Cat::Cat(std::string type): Animal(type)
{
    std::cout<<"Cat constructor called"<<std::endl;
}

Cat::Cat(const Cat& cpy): Animal()
{
    std::cout<<"Cat copy constructor called"<<std::endl;
    this->set_type(cpy.get_type());
}

Cat::Cat(): Animal("Cat")
{
    std::cout<<"Cat default constructor called"<<std::endl;
}

Cat::~Cat()
{
    std::cout<<"Cat destructor called"<<std::endl;
}
