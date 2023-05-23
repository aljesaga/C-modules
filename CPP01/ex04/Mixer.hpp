#ifndef MIXER_HPP
# define MIXER_HPP

#include <iostream>

class Mixer
{
    private:
        std::string _text1;
        std::string _text2;
        std::string _filename;

    public:
        
        std::string get_text(std::string _string);

        Mixer(std::string Fd, std::string T1, std::string T2);
        ~Mixer();

};

#endif