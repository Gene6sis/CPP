/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:15:36 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/22 20:37:23 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie{

	public :
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);

	private :
		std::string _name;

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif