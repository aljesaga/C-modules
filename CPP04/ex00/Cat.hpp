/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:18:34 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/05 18:19:34 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
    public:
        void    makeSound() const;
        void    operator=(Cat& cpy) const;
        Cat(std::string type);
        Cat(const Cat& cpy);
        Cat();
        ~Cat();
};

#endif