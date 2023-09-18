/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:08:40 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/18 11:51:34 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
class ICharacter;

class Ice: public AMateria
{
    public:
        void    use(ICharacter & target);

        Ice(Ice const& cpy);
        AMateria *clone() const;
        Ice();
        ~Ice();

        Ice &operator=(Ice const& cpy);
};

#endif