/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 00:01:45 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/24 21:19:12 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	harl.complain("warning");
	harl.complain("WARNING");

	harl.complain("info");
	harl.complain("INFO");
	
	harl.complain("debug");
	harl.complain("DEBUG");
	
	harl.complain("error");
	harl.complain("ERROR");
	return (0);
}