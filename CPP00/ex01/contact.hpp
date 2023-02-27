#ifndef CONTACT_HPP
# define CONTAC_HPP

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
			std::string _f_name;
			std::string	_l_name;
			std::string	_n_name;
			std::string	_phone;
			std::string	_dark_secret;
};

#endif