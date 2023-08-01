/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat-Dog.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:20:13 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/01 14:56:40 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT-DOG_HPP
# define CAT-DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
    public:
        void    operator=(Dog& cpy) const;
        Dog(std::string type);
        Dog(const Dog& cpy);
        Dog();
        ~Dog();

};

class Cat: public Animal
{
    public:
        void    operator=(Cat& cpy) const;
        Cat(std::string type);
        Cat(const Cat& cpy);
        Cat();
        ~Cat();
};

#endif