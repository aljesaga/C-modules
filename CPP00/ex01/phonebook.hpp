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
            void    add_contact(int n_con);
            void    view_contact(int n_con);
            void    view_palm();
            int    init_palm();
};

#endif