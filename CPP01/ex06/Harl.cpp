#include "Harl.hpp"

void    Harl::debug()
{
    std::cout<<GREEN;
    std::cout<<"[ DEBUG ]"<<std::endl;
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!\n"<<std::endl;
}

void    Harl::info()
{
    std::cout<<CYAN;
    std::cout<<"[ INFO ]"<<std::endl;
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"<<std::endl;
}

void    Harl::warning()
{
    std::cout<<YELLOW;
    std::cout<<"[ WARNIG ]"<<std::endl;
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n"<<std::endl;
}

void    Harl::error()
{
    std::cout<<RED;
    std::cout<<"[ ERROR ]"<<std::endl;
    std::cout<<"This is unacceptable! I want to speak to the manager now.\n"<<std::endl;
}

void    Harl::complain(std::string level)
{
    std::string name[4] {"DEBUG", "INFO", "WARNING", "ERROR"};

    funtion fun[] {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for(int i = 0; i < 4; i++)
    {
        if (level == name[i])
        {
            switch (i)
            {
            case 0:
                (this->*fun[0])();
            case 1:
                (this->*fun[1])();
            case 2:
                (this->*fun[2])();
            case 3:
                (this->*fun[3])();
            default:
                std::cout<<RESET;
                return ;
            }
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