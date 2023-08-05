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
