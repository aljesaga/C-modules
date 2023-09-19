/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:56:49 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/19 11:09:02 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iomanip>
# include <iostream>

class AAnimal
{
    protected:
        std::string type;
    
    public:
        void    set_type(std::string _type);
        std::string get_type() const;
        virtual void makeSound() const = 0;
        
        /*
        void    operator=(AAnimal &cpy);     
        AAnimal(std::string _type);
        AAnimal(const AAnimal& cpy);
        AAnimal();
        */
        virtual ~AAnimal();

};

#endif