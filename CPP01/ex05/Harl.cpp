#include "Harl.hpp"

void    Harl::debug()
{
    std::cout<<GREEN;
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!"<<std::endl;
}

void    Harl::info()
{
    std::cout<<CYAN;
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void    Harl::warning()
{
    std::cout<<YELLOW;
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void    Harl::error()
{
    std::cout<<RED;
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void    Harl::complain(std::string level)
{
    std::string name[4] {"DEBUG", "INFO", "WARNING", "ERROR"};

    funtion fun[] {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for(int i = 0; i < 4; i++)
    {
        if (level == name[i])
        {
            (this->*fun[i])();
            std::cout<<RESET;
            return ;
        }
    }
    std::cout<<"Command not found"<<std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}