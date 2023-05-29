/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Half.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:38:11 by alsanche          #+#    #+#             */
/*   Updated: 2023/05/26 17:45:47 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

#define YELLOW "\e[0;33m";
#define RED    "\e[0;31m";
#define GREEN  "\e[0;32m";
#define CYAN   "\e[0;36m";
#define RESET  "\e[0m";

class Harl
{
    private:
    
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
    
    public:

        void    complain(std::string level);
        typedef void (Harl::*funtion)();
        Harl();
        ~Harl();

};

#endif