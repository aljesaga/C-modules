/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:32:23 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/29 11:59:30 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    std::cout<<"----o----Animmal constructor----o----"<<std::endl;
    //const Animal *meta = new Animal();
    std::cout<<std::endl<<"----o----Dog constructor----o----"<<std::endl;
    Dog *dog = new Dog();
    std::cout<<std::endl<<"----o----Cat constructor----o----"<<std::endl;
    Cat *cat = new Cat();

    std::cout<<std::endl;

   // std::cout<< meta->get_type() <<std::endl;
    std::cout<< dog->get_type() << std::endl;
    std::cout<< cat->get_type() << std::endl;
    std::cout<<std::endl;
    cat->makeSound();
    dog->makeSound();
    //meta->makeSound();

    std::cout<<std::endl;

    std::cout<<std::endl<<"---o---Cat Brain---o---"<<std::endl;

    std::cout<<std::endl;

    cat->get_idea()->set_idea("Necesito tirar la palanta a suelo", 0);
    cat->get_idea()->set_idea("Tengo que cazar esa paloma", 1);

    for(int i = 0; i < 2; i++)
        std::cout<<cat->get_idea()->get_idea(i)<<std::endl;
    
    std::cout<<std::endl;

        std::cout<<std::endl<<"---o---Dog Brain---o---"<<std::endl;

    std::cout<<std::endl;
    
    dog->get_idea()->set_idea("LLego alguien tengo que ir a saludar", 0);
    dog->get_idea()->set_idea("La pelota La pelotaaaa", 1);

    for(int i = 0; i < 2; i++)
        std::cout<<dog->get_idea()->get_idea(i)<<std::endl;
    
    std::cout<<std::endl;

    std::cout<<std::endl<<"---o---Cat Copy test---o---"<<std::endl;

    Cat *cpy(cat);

    std::cout<<std::endl;

    for(int i = 0; i < 2; i++)
        std::cout<<cpy->get_idea()->get_idea(i)<<std::endl;

    std::cout<<std::endl<<"----o----Cat Copy Change idea----o----"<<std::endl;

    std::cout<<std::endl;

    cat->get_idea()->set_idea("tengio que enterrar mi caca", 0);

    for(int i = 0; i < 2; i++)
        std::cout<<cpy->get_idea()->get_idea(i)<<std::endl;
    
    std::cout<<std::endl<<"----o----Cat destructor----o----"<<std::endl;
    delete cat;
    std::cout<<std::endl<<"----o----Dog destructor----o----"<<std::endl;
    delete dog;
    std::cout<<std::endl<<"----o----Animal destructor----o----"<<std::endl;
    //delete meta;
    return (0);
}