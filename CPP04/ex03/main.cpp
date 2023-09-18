/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:51:52 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/18 14:25:04 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Pyro.hpp"
#include "Electro.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Pyro());
    src->learnMateria(new Electro());

    ICharacter *Cloud  = new Character("Cloud");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    Cloud->equip(tmp);
    tmp = src->createMateria("cure");
    Cloud->equip(tmp);
    tmp = src->createMateria("pyro");
    Cloud->equip(tmp);
    tmp = src->createMateria("electro");
    Cloud->equip(tmp);

    std::cout<<std::endl;

    tmp = src->createMateria("cure");
    Cloud->equip(tmp);
    
    std::cout<<std::endl;

    ICharacter* Sefirot = new Character("Sefirot");

    Cloud->use(0, *Sefirot);
    Cloud->use(1, *Sefirot);
    Cloud->use(2, *Sefirot);
    Cloud->use(3, *Sefirot);

    std::cout<<std::endl;

    Cloud->unequip(2);

    std::cout<<std::endl;
    
    tmp = src->createMateria("ice");
    Cloud->equip(tmp);
    
    std::cout<<std::endl;

    Cloud->use(2, *Sefirot);

    std::cout<<std::endl;

    ICharacter *Cloud_clone = Cloud;

    Cloud_clone->use(3, *Cloud);

    delete Sefirot;
    delete Cloud;
    delete src;

    return (0);
}