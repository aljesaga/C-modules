/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:56:49 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/19 10:39:13 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iomanip>
# include <iostream>

class Animal
{
    protected:
        std::string type;
    
    public:
        void    set_type(std::string _type);
        std::string get_type() const;
        virtual void makeSound() const;
        
        Animal    &operator=(Animal const &cpy);     
        Animal(std::string _type);
        Animal(const Animal& cpy);
        Animal();
        virtual ~Animal();

};

#endif