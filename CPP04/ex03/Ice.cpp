/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:08:04 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/07 17:17:42 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Library.hpp"
 
 void   Ice::use(ICharacter & target)
 {
    std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
 }

 Ice::Ice(std::string tpy): AMateria(tpy)
 {
 }

 Ice::Ice(Ice const& cpy): AMateria(cpy.getType())
 {
 }

 Ice::Ice(): AMateria("Ice")
 {
 }

 Ice::~Ice()
 {
 }

 Ice &Ice::operator=(Ice const& cpy)
 {
    if (this != &cpy)
        *this = cpy;
    return (*this);
 }