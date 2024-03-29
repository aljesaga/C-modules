/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:15:36 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/18 11:58:42 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
class ICharacter;

class Cure: public AMateria
{
    public:
        void    use(ICharacter & target);

        Cure(Cure const& cpy);
        Cure();
        ~Cure();
        AMateria *clone() const;

        Cure &operator=(Cure const & cpy);

};

#endif