#include "phonebook.hpp"

Phonebook::Phonebook()
{
	n_contacts = 0;
}

Phonebook::~Phonebook()
{
	return ;
}

void	add_contact(int	i)
{
	std::string	aux;
	std::string text[5] = {"first Name","last Name","Nickname","Phone Number","Darkest Secret"};
	int	x;

	if(!contacts[i])
		contacts[i].contact();
	for(x=0; x <= 5; x++)
	{
		std::cout<<"type "<<text[x]<<"for the contact\n-> ";
		std::getline(std::cin, aux);
		if (!aux)
		{
			std::cout<<"please type valid"<<text[x]<<std::endl;
			x--;
		}
		else
			contacts[i].add_value(x, aux);
	}
}

void	Phonebook::view_palm(int max)
{
	std::string	text;
	int	i, x;

	for(i=0; i < n_contacts; i++)
	{
		if (i == 0)
			std::cout<<"|Number--ID|First-Name|Last--Name|-Nickname-|Phone--Num|Darkest--S|\n";
		else
			std::cout<<"|----------|----------|----------|----------|----------|----------|\n";
		for (x = 0; x < 5; x++)
		{
			text = contacts::get_value(x);	
			std::cout<<"|"<<text<<"|";
		}
	}
	std::cout<<"|____________________________________________________________________|\n";
}

void	Phonebook::turn_off()
{
	int	i;

	if (n_contacts >= 1)
	{
		for(i = 0; i < n_contacts, i++)
			contacts[i].~contact();
	}
	~phonebook();
}