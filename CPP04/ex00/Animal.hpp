/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:56:49 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/01 14:44:13 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_CPP

# include <iomanip>
# include <iostream>

class Animal
{
    protected:
        std::string type;
    
    public:
        void    operator=(Animal &cpy);     
        void    set_type(std::string _type);
        std::string get_type(void) const;
        void    makeSound(void);
        Animal(std::string _type);
        Animal(const Animal& cpy);
        Animal(void);
        ~Animal();

};

#endif