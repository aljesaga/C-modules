/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:32:31 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/05 18:54:22 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    
    public:
        void    operator=(WrongAnimal &cpy);     
        void    set_type(std::string _type);
        std::string get_type() const;
        void makeSound() const;
        WrongAnimal(const WrongAnimal& cpy);
        WrongAnimal(std::string _type);
        WrongAnimal();
        ~WrongAnimal();

};

#endif