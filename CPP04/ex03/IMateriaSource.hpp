/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriasource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:42:32 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/07 19:20:07 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "Library.hpp"

class IMateriaSource
{ 
    public:
        virtual ~IMateriaSource() {};
        virtual void learnMateria(AMateria *) = 0;
        Virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource: public IMateriaSource
{
    private:
        AMateria* slots[4];

    public:
        MateriaSource(AMateria* m);
        MateriaSource(MateriaSource const & cpy);
        MateriaSource();
        ~MateriaSource();

        void learMateria(AMaetia *m);
        AMateria *createMateria(std::string const &type);
};