#include "Mixer.hpp"

int main(int arc, char** arv)
{
    std::string temp;
    if (arc == 4)
    {
        Mixer prueba(arv[1], arv[2], arv[3]);
        prueba.get_text();
    }
    else
        std::cout<<"worng arguments"<<std::endl;
    return (0);
}