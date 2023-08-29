/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:56:49 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/29 12:36:37 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iomanip>
# include <iostream>

class A_Animal
{
    protected:
        std::string type;
    
    public:
        void    set_type(std::string _type);
        std::string get_type() const;
        virtual void makeSound() const = 0;
        
        /*
        void    operator=(A_Animal &cpy);     
        A_Animal(std::string _type);
        A_Animal(const A_Animal& cpy);
        A_Animal();
        */
        virtual ~A_Animal();

};

#endif