/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:18:34 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/29 12:53:53 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public A_Animal
{
    public:
        void    makeSound() const;
        Brain *get_idea();
        
        void    operator=(Cat& cpy) const;
        Cat(std::string type);
        Cat(const Cat& cpy);
        Cat();
        ~Cat();

    private:
        Brain* attribute;
};

#endif