/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:32:23 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/05 18:20:51 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout<<std::endl;

    std::cout<< meta->get_type() <<std::endl;
    std::cout<< j->get_type() << std::endl;
    std::cout<< i->get_type() << std::endl;
    std::cout<<std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout<<std::endl;
    delete i;
    delete j;
    delete meta;

    std::cout<<std::endl<<"---o---WorngAnimal---o---"<<std::endl;

    std::cout<<std::endl;
    const WrongAnimal* animal = new WrongAnimal();
    const WrongAnimal* cat = new WrongCat();

    std::cout<<std::endl;
    std::cout<< animal->get_type() << std::endl;
    std::cout<< cat->get_type() << std::endl;
    std::cout<<std::endl;
    cat->makeSound();
    animal->makeSound();

    std::cout<<std::endl;
    delete cat;
    delete animal;

    return (0);
}