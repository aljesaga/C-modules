/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:08:40 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/07 17:18:16 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "Library.hpp"

class Ice: public AMateria
{
    public:
        void    use(ICharacter & target);

        Ice(std::string tpy);
        Ice(Ice const& cpy);
        Ice();
        ~Ice();

        Ice &operator=(Ice const& cpy);
};

#endif