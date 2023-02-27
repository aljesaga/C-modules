/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:02:53 by alsanche          #+#    #+#             */
/*   Updated: 2023/02/27 15:16:06 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include    "contact.hpp"

Contact::Contact()
{
    f_name = "";
    l_name = "";
    n_name = "";
    phone = "";
    dark_secret = "";
}

Contact::~Contact()
{
    return ;
}

void   Contact::add_value(int type, std::string value)
{
    if (type == 0)
        f_name = value;
    else if (type == 1)
        l_name = value;
    else if (type == 2)
        n_name = value;
    else if (type == 3)
        phone = value;
    else if (type == 4)
        dark_secret = value;
}

std::string Contact::get_value(int type)
{
    if (type == 0)
        return (f_name);
    else if (type == 1)
        return (l_name);
    else if (type == 2)
        return (n_name);
    else if (type == 3)
        return (phone);
    else if (type == 4)
        return (dark_secret);
    return (NULL);
}