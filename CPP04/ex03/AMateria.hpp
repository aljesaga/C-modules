/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:16:18 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/19 11:34:10 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"
class ICharacter;

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria(std::string const & id);
        AMateria(AMateria const & cpy);
        virtual ~AMateria();

        std::string const & getType() const;

        virtual AMateria * clone() const = 0;
        virtual void use(ICharacter& target);

        AMateria& operator=(AMateria const & cpy);
};

#endif