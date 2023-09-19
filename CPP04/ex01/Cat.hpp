/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:18:34 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/19 09:55:35 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
    public:
        void    makeSound() const;
        Brain   *get_idea();
        
        Cat&    operator=(Cat const & cpy);
        Cat(std::string type);
        Cat(const Cat& cpy);
        Cat();
        ~Cat();

    private:
        Brain* attribute;
};

#endif