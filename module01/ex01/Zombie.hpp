/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:44:28 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/22 20:59:03 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {

	public :
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void set_name(std::string name);
		void announce();

	private :
		std::string _name;
};

Zombie*    zombieHorde(int N, std::string name);

#endif