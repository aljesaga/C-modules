/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:15:10 by alsanche          #+#    #+#             */
/*   Updated: 2023/02/27 18:11:04 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	n_contacts = 0;
}

Phonebook::~Phonebook()
{
	return ;
}

void	Phonebook::add_contact(int n_con)
{
	std::string	aux;
	std::string text[5] = {"first Name","last Name","Nickname","Phone Number","Darkest Secret"};
	int	x, i;

	if (n_con > MAX_C)
		i = this->n_contacts % MAX_C;
	else
		i = n_con;
	for(x=0; x < 5; x++)
	{
		std::cout<<"type "<<text[x]<<"for the contact\n-> ";
		if (!std::getline(std::cin, aux))
		{
			std::cout<<"please type valid"<<text[x]<<std::endl;
			x--;
		}
		else
			this->contacts[i].add_value(x, aux);
	}
}

void	Phonebook::view_palm()
{
	std::string	text;
	int	i, x;

	std::cout<<" ___________________________________________ \n";
	std::cout<<"|Number--ID|First-Name|Last--Name|-Nickname-|\n";
	for(i=0; i < n_contacts; i++)
	{
		if (i >= 1)
			std::cout<<"|----------|----------|----------|----------|\n";
		std::cout<<"|"<<std::setfill(' ')<<std::setw(10)<<i<<"|";
		for (x = 0; x < 3; x++)
		{
			text = this->contacts[i].get_value(x);
			std::cout<<std::setfill(' ')<<std::setw(10)<<text<<"|";
		}
		std::cout<<std::endl;
	}
	std::cout<<"|__________|__________|__________|__________|\n";
}

int	Phonebook::init_palm()
{
	std::string aux;

	while(1)
	{
		std::cout<<"Please enter a command->: ";
		if (std::getline(std::cin, aux))
		{
			if (aux == "ADD")
			{
				add_contact(n_contacts);
				n_contacts++;
			}
			else if (aux == "SEARCH")
				view_palm();
			else if (aux == "EXIT")
				return (0);
			else
				std::cout<<"Sorry, the accepted commands are: 'ADD' , 'SEARCH' , 'EXIT'\n";
		}	
	}
	return (-1);
}