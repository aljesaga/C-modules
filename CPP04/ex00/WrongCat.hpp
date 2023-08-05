/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:45:44 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/05 18:46:58 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        void    makeSound() const;
        void    operator=(WrongCat& cpy) const;
        WrongCat(std::string type);
        WrongCat(const WrongCat& cpy);
        WrongCat();
        ~WrongCat();
};

#endif