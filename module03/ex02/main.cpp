/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 00:16:53 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/22 01:46:13 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
# include <algorithm>

int main(void)
{
	
	#define _hit_point_ClapTrap 10
	#define _energy_point_ClapTrap 10
	
	std::cout << "\t\t\t\t-------------\e[0;31m ClapTrap\e[0m -------------" << std::endl << std::endl;
	{
		{
			ClapTrap Boby = ClapTrap("Bob");
			ClapTrap Bob = Boby;
		}

		std::cout << "\t\t\t\t\e[0;34mFirst test : Energy point\e[0m" << std::endl << std::endl;
		{
			ClapTrap John("John");
			for (int i = 0; i < 15; i++)
			{
				if (i == _energy_point_ClapTrap)
					std::cout << "John est cense ne plus avoir d'energie" << std::endl;
				std::cout << "energy : " << ((_energy_point_ClapTrap - i < 0) ? 0: (_energy_point_ClapTrap-i)) << "\t\t";
				John.attack("bob");
			}
			John.beRepaired(15);
		}

		std::cout << std::endl << "\t\t\t\t\e[0;34mSecond test : Health point\e[0m" << std::endl << std::endl;
		{
			ClapTrap Trap;
			srand(time(NULL));
			int health = _hit_point_ClapTrap;
			for (int i = 0; i < 10; i++)
			{
				int random = rand() % 10;
				std::cout << "my health : " << health << "\t" << "damage : " << random << "\t\t";
				Trap.takeDamage(random);
				health = ((health - random < 0) ? 0: health - random);
			}
		}

		std::cout << std::endl << " \t\t\t\t\e[0;34mThird test : Let's fight Patrick!\e[0m" << std::endl << std::endl;
		{
			int health = _hit_point_ClapTrap;
			int energy = _energy_point_ClapTrap;

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

	#define _hit_point_ScavTrap 100
	#define _energy_point_ScavTrap 50
	
	std::cout << std::endl << std::endl << "\t\t\t\t-------------\e[0;31m ScavTrap\e[0m -------------" << std::endl << std::endl;
	{
		std::cout << "\t\t\t\t\e[0;34mFirst test : Energy point\e[0m" << std::endl << std::endl;
		{
			ScavTrap John("John");
			for (int i = 0; i < _energy_point_ScavTrap + 5; i++)
			{
				if (i == _energy_point_ScavTrap)
					std::cout << GREEN "John est cense ne plus avoir d'energie" WHITE << std::endl;
				std::cout << "energy : " << ((_energy_point_ScavTrap - i < 0) ? 0: (_energy_point_ScavTrap-i)) << "\t\t";
				John.attack("bob");
			}
			John.beRepaired(15);
		}

		std::cout << std::endl << "\t\t\t\t\e[0;34mSecond test : Health point\e[0m" << std::endl << std::endl;
		{
			ScavTrap Trap;
			srand(time(NULL));
			int health = _hit_point_ScavTrap;
			for (int i = 0; health; i++)
			{
				int random = rand() % 10;
				std::cout << "my health : " << health << "\t" << "damage : " << random << "\t\t";
				Trap.takeDamage(random);
				health = ((health - random < 0) ? 0: health - random);
			}
		}

		std::cout << std::endl << " \t\t\t\t\e[0;34mThird test : Let's fight Patrick!\e[0m" << std::endl << std::endl;
		{
			int health = _hit_point_ScavTrap;
			int energy = _energy_point_ScavTrap;

			ScavTrap Bob("Bob");
			while (1)
			{
				int hit = rand() % 15;
				int heal = rand() % 20;

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
					std::cout << GREEN;
					Bob.attack("Patrick");
					std::cout << WHITE;
					energy -= 1;
				}
				if (rand() % 15 == 0)
				{
					std::cout << PURPLE;
					Bob.guardGate();
					std::cout << WHITE;
				}
			}
		}
	}

	#define _hit_point_FragTrap 100
	#define _energy_point_FragTrap 100
	
	std::cout << std::endl << std::endl << "\t\t\t\t-------------\e[0;31m FragTrap\e[0m -------------" << std::endl << std::endl;
	{
		std::cout << "\t\t\t\t\e[0;34mFirst test : Energy point\e[0m" << std::endl << std::endl;
		{
			FragTrap John("John");
			for (int i = 0; i < _energy_point_FragTrap + 5; i++)
			{
				if (i == _energy_point_FragTrap)
					std::cout << GREEN "John est cense ne plus avoir d'energie" WHITE << std::endl;
				std::cout << "energy : " << ((_energy_point_FragTrap - i < 0) ? 0: (_energy_point_FragTrap-i)) << "\t\t";
				John.attack("bob");
			}
			John.beRepaired(15);
		}

		std::cout << std::endl << "\t\t\t\t\e[0;34mSecond test : Health point\e[0m" << std::endl << std::endl;
		{
			FragTrap Trap;
			srand(time(NULL));
			int health = _hit_point_FragTrap;
			for (int i = 0; health; i++)
			{
				int random = rand() % 10;
				std::cout << "my health : " << health << "\t" << "damage : " << random << "\t\t";
				Trap.takeDamage(random);
				health = ((health - random < 0) ? 0: health - random);
			}
		}

		std::cout << std::endl << " \t\t\t\t\e[0;34mThird test : Let's fight Patrick!\e[0m" << std::endl << std::endl;
		{
			int health = _hit_point_FragTrap;
			int energy = _energy_point_FragTrap;

			FragTrap Boby = FragTrap("Bob");
			FragTrap Bob = FragTrap(Boby);
			while (1)
			{
				int hit = rand() % 15;
				int heal = rand() % 20;

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
					std::cout << GREEN;
					Bob.attack("Patrick");
					std::cout << WHITE;
					energy -= 1;
				}
				if (rand() % 15 == 0)
				{
					std::cout << PURPLE;
					Bob.highFivesGuys();
					std::cout << WHITE;
				}
			}
		}
	}
}