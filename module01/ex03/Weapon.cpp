/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:42:25 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/24 00:03:50 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	_type = "default";
	return ;
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
	return ;
}

void Weapon::setType(std::string type)
{
	_type = type;
	return ;
}

std::string Weapon::getType() const
{
	return (_type);
}
