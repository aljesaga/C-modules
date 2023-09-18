/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pyro.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:15:36 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/18 13:46:45 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PYRO_HPP
# define PYRO_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
class ICharacter;

class Pyro: public AMateria
{
    public:
        void    use(ICharacter & target);

        Pyro(Pyro const& cpy);
        Pyro();
        ~Pyro();
        AMateria *clone() const;

        Pyro &operator=(Pyro const & cpy);

};

#endif