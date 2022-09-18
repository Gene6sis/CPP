/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:03:01 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/18 17:23:04 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	std::string str;
	PhoneBook Book;
	
	if (argc == 2)
	{
		if (strcmp(argv[1], "fill"))
			return (0);
		std::cout << "Remplir tableau" << std::endl;
	}
	std::cout << "Welcome in PhoneBook World" << std::endl;
	while (1)
	{
		std::cout << "ADD : register a new Contact" << std::endl;
		std::cout << "SEARCH : display a specific Contact" << std::endl;
		std::cout << "EXIT : exit and clean the PhoneBook" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			break;
		else if (!str.compare("EXIT"))
			break;
		else if (!str.compare("ADD"))
			Book.addContact();
		else if (!str.compare("SEARCH"))
			Book.showContact();
		else
			std::cerr << "Command unknow, please type one of the following commands" << std::endl;
	}
	std::cout << "hello" << std::endl;
	return (0);
}