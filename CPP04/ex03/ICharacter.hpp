/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:35:47 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/18 11:39:18 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"
class AMateria;

class ICharacter
{
    protected:
        std::string Name;

    public:
        virtual ~ICharacter() {};
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria *m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use (int idx, ICharacter& target) = 0;
};

class Character: public ICharacter
{
    private:
        AMateria* slots[4];
        
    public:
        Character(std::string id);
        Character(Character const& cpy);
        Character();
        ~Character();

        std::string const & getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);

        Character& operator=(Character const & cpy);

};

#endif