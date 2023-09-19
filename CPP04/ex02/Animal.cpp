/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:25:10 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/19 11:18:53 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void AAnimal::set_type(std::string _type)
{
    this->type = _type;
}

std::string AAnimal::get_type() const
{
    return(this->type);
}

void AAnimal::makeSound() const
{
     std::cout<<"Unknown Sound"<<std::endl;
}

/*void    AAnimal::operator=(A_Animal &cpy)
{
    this->type = cpy.get_type();
}

AAnimal::AAnimal(std::string _type)
{
    std::cout<<"AAnimal constructor called"<<std::endl;
    this->type = _type;
}

AAnimal::AAnimal(const AAnimal& cpy)
{
    std::cout<<"AAnimal copy constructor called"<<std::endl;
    this->type = cpy.get_type();
}

AAnimal::AAnimal()
{
    std::cout<<"AAnimal default constructor called"<<std::endl;
    this->type = "Unknown species";
}*/

AAnimal::~AAnimal()
{
    std::cout<<"AAnimal destructor called"<<std::endl;
}
