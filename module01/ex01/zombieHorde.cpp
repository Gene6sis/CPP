/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:44:30 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/22 21:01:49 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name){
	Zombie *zombie = new Zombie[N]();
	for (int i = 0; i < N; i++)
		zombie[i].set_name(name);
	return (zombie);
}