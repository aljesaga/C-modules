/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:16:18 by alsanche          #+#    #+#             */
/*   Updated: 2023/08/29 14:02:59 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <iomanip>

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
        virtual void use(ICharcter & target);

        AMateria& operator=(AMateria const & cpy);
};

#endif