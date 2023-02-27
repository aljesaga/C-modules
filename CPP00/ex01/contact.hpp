#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
	public:
			void	add_value(int type, std::string value);
			std::string	get_value(int type);
			Contact();
			~Contact();

    private:
			std::string f_name;
			std::string	l_name;
			std::string	n_name;
			std::string	phone;
			std::string	dark_secret;
};

#endif