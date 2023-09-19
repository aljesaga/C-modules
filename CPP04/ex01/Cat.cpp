/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:17:48 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/19 10:45:36 by alsanche         ###   ########lyon.fr   */
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

Cat &Cat::operator=(Cat const & cpy)
{
    this->attribute = new Brain(*cpy.attribute);
    this->type = cpy.get_type();
    return (*this);
}

Cat::Cat(std::string type): Animal(type)
{
    std::cout<<"Cat constructor called"<<std::endl;
    this->attribute = new Brain();
}

Cat::Cat(const Cat& cpy): Animal()
{
    std::cout<<"Cat copy constructor called"<<std::endl;
    this->set_type(cpy.get_type());
    this->attribute = new Brain(*cpy.attribute);
}

Cat::Cat(): Animal("Cat")
{
    std::cout<<"Cat default constructor called"<<std::endl;
    this->attribute = new Brain();
}

Cat::~Cat()
{
    std::cout<<"Cat destructor called"<<std::endl;
    delete this->attribute;
}
