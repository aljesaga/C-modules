/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:17:17 by alsanche          #+#    #+#             */
/*   Updated: 2023/07/18 12:06:02 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string Brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &Brain;
    std::string &stringREF = Brain;

    std::cout<<"string:    "<<&Brain<<std::endl;
    std::cout<<"stringPTR: "<<stringPTR<<std::endl;
    std::cout<<"stringREF: "<<&stringREF<<std::endl;
    std::cout<<std::endl;
    std::cout<<"string:    "<<Brain<<std::endl;
    std::cout<<"stringPTR: "<<*stringPTR<<std::endl;
    std::cout<<"stringREF: "<<stringREF<<std::endl;

    return (0);
}