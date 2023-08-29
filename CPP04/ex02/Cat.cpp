/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:17:48 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/29 12:53:27 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound() const
{
     std::cout<<"MIAUUUUU MIAUUUU 🐱"<<std::endl;
}

Brain* Cat::get_idea()
{
    return (this->attribute);
}

void Cat::operator=(Cat& cpy) const
{
    *this = cpy;
}

Cat::Cat(std::string type): A_Animal()
{
    this->set_type(type);
    std::cout<<"Cat constructor called"<<std::endl;
    this->attribute = new Brain();
}

Cat::Cat(const Cat& cpy): A_Animal()
{
    std::cout<<"Cat copy constructor called"<<std::endl;
    this->set_type(cpy.get_type());
    this->attribute = cpy.attribute;
}

Cat::Cat(): A_Animal()
{
    std::cout<<"Cat default constructor called"<<std::endl;
    this->set_type("Cat");
    this->attribute = new Brain();
}

Cat::~Cat()
{
    std::cout<<"Cat destructor called"<<std::endl;
    delete this->attribute;
}
