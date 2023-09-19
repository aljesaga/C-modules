/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:05:10 by alsanche          #+#    #+#             */
/*   Updated: 2023/09/19 10:09:01 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        std::string get_idea(int x);
        void set_idea(std::string str, int x);
        
        Brain &operator=(Brain const &cpy);
        Brain(Brain const &cpy);
        Brain();
        virtual ~Brain();
        std::string ideas[100];
};

#endif