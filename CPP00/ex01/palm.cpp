/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:15:10 by alsanche          #+#    #+#             */
/*   Updated: 2023/05/17 16:28:35 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	n_contacts = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::add_contact(int n_con)
{
	std::string	aux;
	std::string text[5] = {"first Name","last Name","Nickname","Phone Number","Darkest Secret"};
	int	x, i;

	if (n_con >= MAX_C)
		i = this->n_contacts % MAX_C;
	else
		i = n_con;
	for(x=0; x < 5; x++)
	{
		std::cout<<"type "<<text[x]<<" for the contact\n-> ";
		if (std::getline(std::cin, aux))
			this->contacts[i].add_value(x, aux);
		else
		{
			std::cout<<"please type valid"<<text[x]<<std::endl;
			x--;
		}
	}
}

void	Phonebook::view_contact(int n_con)
{
	std::string	text, view;
	std::string title[5] = {"first Name","last Name","Nickname","Phone Number","Darkest Secret"};
	int	i, x, len;

	std::cout<<"type ID to see all info :: ";
	std::getline(std::cin, view);
	len = view.length();
	for (x=0; x < len; x++)
	{
		if (!std::isdigit(view[x]))
		{
			std::cout<<"Wrong ID"<<std::endl;
			return ;
		}
	}
	i = std::stoi(view, NULL, 10);
	if (i >= 1 && i <= n_con)
	{
		for(x = 0; x < 5; x++)
		{
			text = this->contacts[i - 1].get_value(x);
			std::cout<<"\033[32m"<<title[x]<<"\033[0m [ "<<text<<" ]\n";
		}
	}
	else
		std::cout<<"Invalid ID"<<std::endl;
}

void	Phonebook::view_palm()
{
	std::string	text;
	std::string title[5] = {"first Name","last Name","Nickname","Phone Number","Darkest Secret"};
	int	i, x, n_con;

	if (n_contacts > MAX_C)
		n_con = MAX_C;
	else
		n_con = this->n_contacts;
	std::cout<<" ___________________________________________ \n";
	std::cout<<"|Number--ID|First-Name|Last--Name|-Nickname-|\n";
	std::cout<<"|-------------------------------------------|\n";
	for(i=0; i < n_con; i++)
	{
		if (i >= 1)
			std::cout<<"|----------|----------|----------|----------|\n";
		std::cout<<"|"<<std::setfill(' ')<<std::setw(10)<<i + 1<<"|";
		for (x = 0; x < 3; x++)
		{
			text = this->contacts[i].get_value(x);
			if (text.size() > 10)
				std::cout<<std::setfill(' ')<<std::setw(9)<<text.substr(0,9)<<".|";
			else
				std::cout<<std::setfill(' ')<<std::setw(10)<<text<<"|";
		}
		std::cout<<std::endl;
	}
	std::cout<<"|__________|__________|__________|__________|\n";
	if (n_con > 0)
		view_contact(n_con);
}

int	Phonebook::init_palm()
{
	std::string aux;

	while(1)
	{
		std::cout<<"\033[0mPlease enter a command->: ";
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