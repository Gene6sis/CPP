/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 00:16:53 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/21 19:15:22 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
# include <algorithm>

#define _hit_point 10
#define _energy_point 10

int main(void)
{
	std::cout << "First test : Energy point" << std::endl << std::endl;
	{
		ClapTrap John("John");
		for (int i = 0; i < 15; i++)
		{
			if (i == _energy_point)
				std::cout << "John est cense ne plus avoir d'energie" << std::endl;
			std::cout << "energy : " << ((_energy_point - i < 0) ? 0: (_energy_point-i)) << "\t\t";
			John.attack("bob");
		}
		John.beRepaired(15);
	}

	std::cout << std::endl << "Second test : Health point" << std::endl << std::endl;
	{
		ClapTrap Trap;
		srand(time(NULL));
		int health = _hit_point;
		for (int i = 0; i < 10; i++)
		{
			int random = rand() % 10;
			std::cout << "my health : " << health << "\t" << "damage : " << random << "\t\t";
			Trap.takeDamage(random);
			health = ((health - random < 0) ? 0: health - random);
		}
	}

	std::cout << std::endl << " Third test : Let's fight Patrick!" << std::endl << std::endl;
	{
		int health = _hit_point;
		int energy = _energy_point;

		ClapTrap Bob("Bob");
		while (1)
		{
			int hit = rand() % 3;
			int heal = rand() % 10;

			std::cout << "Health " << health << "\tHit " << hit << "\t\t";
			Bob.takeDamage(hit);
			health = health - hit;
			if (health <= 0)
				break;
			if (rand() % 4 == 0 )
			{
				Bob.beRepaired(heal);
				if (energy)
					health += heal;
				energy = (energy ? energy - 1: 0);
			}
			if (rand() % 3 == 0 && energy)
			{
				Bob.attack("Patrick");
				energy -= 1;
			}
		}
	}
}