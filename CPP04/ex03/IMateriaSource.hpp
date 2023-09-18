/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:42:32 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/18 12:26:28 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"
class Amateria;

class IMateriaSource
{ 
    public:
        virtual ~IMateriaSource() {};
        virtual void learnMateria(AMateria *) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource: public IMateriaSource
{
    private:
        AMateria* slots[4];

    public:
        MateriaSource(MateriaSource const & cpy);
        MateriaSource();
        ~MateriaSource();

        void learnMateria(AMateria *);
        AMateria *createMateria(std::string const &type);
        MateriaSource& operator=(MateriaSource const& cpy);
};

#endif