#include "Mixer.hpp"

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
    this->_out_file = this->_filename.append("_modified");
    this->out.open(this->_out_file);
    this->in.open(this->_filename);
    if (this->in.fail() || this->out.fail())
    {
        std::cout<<"file dont open"<<std::endl;
        this->Error = 1;
    }
    return ;
}
Mixer::~Mixer()
{
    this->in.close();
    this->out.close();
    return ;
}

void Mixer::get_text()
{
    size_t start, end, pos;
    std::string _line;
    
    if (this->Error == 0)
    {
        std::getline(this->in,_line);
        std::cout<<_line<<std::endl;
        while (_line.size() != 0)
        {
            start = _line.find(this->_text1);
            if (start >= 0)
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
            std::getline(this->in, _line);
        }
    }
}
