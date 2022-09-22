/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:17:29 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/22 20:39:55 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	// Stack
	Zombie	bob = Zombie("Bob");
	bob.announce();

	// Heap
	Zombie	*sponge = newZombie("Sponge");
	sponge->announce();
	delete(sponge);

	// Stack
	randomChump("SpongeBob");
}