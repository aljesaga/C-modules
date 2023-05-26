/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mixer.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:38:27 by alsanche          #+#    #+#             */
/*   Updated: 2023/05/26 17:38:28 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Mixer.hpp"

void Mixer::get_text()
{
    size_t start, end, pos;
    std::string _line;
    
    if (this->Error == 0)
    {
        while (std::getline(this->in, _line))
        {
            start = _line.find(this->_text1);
            if (start != std::string::npos)
            { 
                end = this->_text1.size();
                _line.erase(start, end);
                if(start >= end)
                    pos = start - end;
                end = this->_text2.size();
                _line.insert(start, this->_text2);
                this->out<<_line<<std::endl;
            }
            else
                this->out<<_line<<std::endl;
        }
    }
}

Mixer::Mixer(std::string Fd, std::string T1, std::string T2)
{
    this->_filename = Fd;
    this->_text1 = T1;
    this->_text2 = T2;

    this->Error = 0;
    if (this->_text1.empty() || this->_text2.empty())
    {
        std::cout<<"Empty string"<<std::endl;
        this->Error = 1;
    }
    this->_out_file = this->_filename;
    this->_out_file.append("_mixed");
    this->in.open(this->_filename);
    if (this->in.fail())
    {
        std::cout<<"In file dont open"<<std::endl;
        this->Error = 1;
    }
    this->out.open(this->_out_file);
    if (this->out.fail())
    {
        std::cout<<"Out file dont open"<<std::endl;
        this->Error = 1;
    }
}
Mixer::~Mixer()
{
        this->in.close();
        this->out.close();
}
