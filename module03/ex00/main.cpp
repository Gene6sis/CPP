/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 00:16:53 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/02 00:26:22 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Trap;
	ClapTrap John("John");
	
	John.attack("bob");
	John.attack("bob");
	John.attack("bob");
	John.attack("bob");
	John.attack("bob");
	John.attack("bob");
	John.attack("bob");
	John.attack("bob");
	John.attack("bob");
	John.attack("bob");
	John.beRepaired(15);

	John.takeDamage(5);
	John.takeDamage(4);
	John.takeDamage(1);
	John.takeDamage(1);
	John.takeDamage(1);
	John.attack("Jean");
	John.beRepaired(5);
}