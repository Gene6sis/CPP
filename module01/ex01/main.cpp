/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:44:19 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/22 21:09:17 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int nb = 15;
	Zombie *zombie = zombieHorde(nb, "Bob");
	for (int i = 0; i < nb; i++)
	{
		std::cout << "Zombie number : " << i << std::endl;
		zombie[i].announce();
	}
	delete[] zombie;
}