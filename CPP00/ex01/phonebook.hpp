#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "contact.hpp"

# define MAX_C 8

class   Phonebook
{
    private:
            Contact contacts[MAX_C];
            int n_contacts;
    public:
            Phonebook();
            ~Phonebook();
            void    add_contact(int);
            void    view_palm();
            void    turn_off();
};

#endif