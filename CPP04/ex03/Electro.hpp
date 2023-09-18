/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Electro.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:15:36 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/18 13:46:45 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ELECTRO_HPP
# define ELECTRO_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
class ICharacter;

class Electro: public AMateria
{
    public:
        void    use(ICharacter & target);

        Electro(Electro const& cpy);
        Electro();
        ~Electro();
        AMateria *clone() const;

        Electro &operator=(Electro const & cpy);

};

#endif