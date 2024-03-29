/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mixer.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:38:31 by alsanche          #+#    #+#             */
/*   Updated: 2023/05/26 17:38:32 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIXER_HPP
# define MIXER_HPP

#include <iostream>
#include <fstream>

class Mixer
{
    private:

        std::ifstream in;
        std::ofstream out;
        std::string _text1;
        std::string _text2;
        std::string _filename;
        std::string _out_file;
        int         Error; 

    public:
        
        void    get_text();

        Mixer(std::string Fd, std::string T1, std::string T2);
        ~Mixer();

};

#endif