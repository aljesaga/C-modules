/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:49:05 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/05 18:49:54 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

void WrongCat::makeSound() const
{
     std::cout<<"WrongCat :: MIAUUUUU MIAUUUU 🐱"<<std::endl;
}

void WrongCat::operator=(WrongCat& cpy) const
{
    *this = cpy;
}

WrongCat::WrongCat(std::string type): WrongAnimal(type)
{
    std::cout<<"WrongCat constructor called"<<std::endl;
}

WrongCat::WrongCat(const WrongCat& cpy): WrongAnimal()
{
    std::cout<<"WrongCat copy constructor called"<<std::endl;
    this->set_type(cpy.get_type());
}

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    std::cout<<"WrongCat default constructor called"<<std::endl;
}

WrongCat::~WrongCat()
{
    std::cout<<"WrongCat destructor called"<<std::endl;
}
