/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat-Dog.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:20:13 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/05 18:20:04 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
    public:
        void    makeSound() const;
        Brain*  get_idea();
        void    operator=(Dog& cpy) const;
        Dog(std::string type);
        Dog(const Dog& cpy);
        Dog();
        ~Dog();

    private:
        Brain* attribute;

};

#endif