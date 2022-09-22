/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:15:34 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/22 20:32:14 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << "Destructor called for " << _name << std::endl;
}

void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}