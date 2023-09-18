/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:08:04 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/18 13:31:11 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
 
 void   Ice::use(ICharacter & target)
 {
    std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
 }

 Ice::Ice(Ice const& cpy): AMateria(cpy.getType())
 {
 }

 Ice::Ice(): AMateria("ice")
 {
 }

 Ice::~Ice()
 {
 }

 AMateria* Ice::clone() const
 {
   return (new Ice());
 }

 Ice &Ice::operator=(Ice const& cpy)
 {
    if (this != &cpy)
        *this = cpy;
    return (*this);
 }