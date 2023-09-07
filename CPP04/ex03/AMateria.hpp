/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:16:18 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/07 16:57:33 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#  include "Library.hpp"

class AMateria
{
    protected:
        std::string _type;

    public:
        AMateria(std::string const & type);
        AMateria(AMateria const & cpy);
        virtual ~AMateria();

        std::string const & getType() const;

        virtual AMateria * clone() const = 0;
        virtual void use(ICharacter & target);

        AMateria& operator=(AMateria const & cpy);
};

#endif