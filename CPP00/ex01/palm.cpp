/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:05:32 by alsanche          #+#    #+#             */
/*   Updated: 2023/02/19 20:49:59 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "stc_phonebook.hpp"


void	search(s_phonebook *p_book)
{
	for(int i=0;i < p_book->save_contacts;i++)
	{
		std::cout<<"-------------------------------------------"<<std::endl;
		std::cout<<"|"<<"00000000"<<i + 1<<"|";
		for(int x=0;x<=10;i++)
			std::cout<<p_book->contact[i].f_name[x];
	}
}

void	add_contac(s_phonebook *p_book, int	id)
{
	int cnt = id % 8;
	char *aux;
	
	for(;;)
	{
		std::cout<<"Type a First name :";
		std::cin>>aux;
		if (aux == NULL || aux[0] == '\0')
			std::cout<<"Please write a First name :(\n";
		else	
		{
			p_book->contact[cnt].f_name = strdup(aux);
			break ;
		}
		p_book->save_contacts++;
	}
}

int	main(void)
{
	s_phonebook *phonebook;
	std::string	line;

	phonebook = new(s_phonebook);
	if (phonebook)
	{
		std::cout<<"Welcom to Palm 1980\n";
		phonebook->contact = new(s_contact[8]);
		phonebook->save_contacts = 0;
		if (phonebook->contact)
		{
			for(;;)
			{
				aux = new(char[10]);
				std::cout<<"Type a command : ";
				std::cin.getline(aux,10,'\n');
				if (!strncmp(aux, "ADD\0", 4))
					add_contac(phonebook, phonebook->save_contacts);
				else if (!strncmp(aux, "SEARCH\0", 7))
					search(phonebook);
				else if (!strncmp(aux, "EXIT\0", 5))
				{
					std::cout<<"exit\n"; //e_exit(phonebook)
					break ;
				}
			}
		}

	}
	else
		std::cout<<"Sorry Palm don't have memory\n";
	return(0);
}