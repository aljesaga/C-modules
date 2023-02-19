/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:02:53 by alsanche          #+#    #+#             */
/*   Updated: 2023/02/19 21:22:31 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include    "contact.hpp"

contact::contact()
{
    _f_name = "";
    _l_name = "";
    _n_name = "";
    _phone = "";
    _dark_secret = "";
}

void   contact::add_value(int type, std::string value)
{
    if (type == 0)
        _f_name = value;
    else if (type == 1)
        _l_name = value;
    else if (type == 2)
        _n_name = value;
    else if (type == 3)
        _phone = value;
    else if (type = 4)
        _dark_secret = value;
}