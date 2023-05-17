/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:17:51 by alsanche          #+#    #+#             */
/*   Updated: 2023/05/17 13:17:55 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
	public:
            Zombie(std::string name);
			Zombie();
			~Zombie();

            void    announce(void);

    private:
			std::string name;
};

    Zombie  *newZombie(std::string name);
    void    randomChump(std::string name);

#endif