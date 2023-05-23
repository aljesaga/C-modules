#include "Mixer.hpp"

Mixer::Mixer(std::string Fd, std::string T1, std::string T2):
_filename(Fd), _text1(T1), _text2(T2)
{
    return ;
}
Mixer::~Mixer()
{
    return ;
}

std::string Mixer::get_text(std::string _string)
{
    if (_string == this->_text1)
        return (this->_text2);
    else
        return (_string);
}