/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:42:25 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/24 21:21:00 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

void Harl::complain(std::string level)
{
	Map list[4] =
	{
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};
	for(int i = 0; i < 4; i++)
	{
		if(list[i].fonction_name == level)
		{
			(this->*list[i].fonction_ptr)();
			return;
		}
	}
	std::cout << "Command unknown : " << level << std::endl;
}
