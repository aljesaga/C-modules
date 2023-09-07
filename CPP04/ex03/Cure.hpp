/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:15:36 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/07 17:59:29 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "Library.hpp"

class Cure: public AMateria
{
    public:
        void    use(ICharacter & target);

        Cure(std::string tpy);
        Cure(Cure const& cpy);
        Cure();
        ~Cure();

        Cure &operator=(Cure const & cpy);

};

#endif