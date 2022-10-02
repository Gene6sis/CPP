/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 00:16:53 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/02 19:52:59 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	// ClapTrap Trap;
	// ClapTrap John("John");
	
	// John.attack("bob");
	// John.attack("bob");
	// John.attack("bob");
	// John.attack("bob");
	// John.attack("bob");
	// John.attack("bob");
	// John.attack("bob");
	// John.attack("bob");
	// John.attack("bob");
	// John.attack("bob");
	// John.beRepaired(15);

	// John.takeDamage(5);
	// John.takeDamage(4);
	// John.takeDamage(1);
	// John.takeDamage(1);
	// John.takeDamage(1);
	// John.attack("Jean");
	// John.beRepaired(5);

	std::cout << std::endl << "-----------------" << std::endl << std::endl;

	ScavTrap Bob("bob");
	Bob.attack("John");
	Bob.guardGate();
}