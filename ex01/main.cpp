/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:03:01 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/20 14:44:55 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	PhoneBook Book;
	
	if (argc > 1)
	{
		if (strcmp(argv[1], "fill"))
			return (0);
		Book.fill();
	}


	std::string str;
	system("clear");
	while (1)
	{
		if (!std::cin)
			return (std::cout << std::endl << "Leaving PhoneBook" << std::endl, 0);
		std::cout << "ADD : register a new Contact" << std::endl;
		std::cout << "SEARCH : display a specific Contact" << std::endl;
		std::cout << "EXIT : exit and clean the PhoneBook" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, str);
		if (!std::cin)
			return (std::cout << "Leaving PhoneBook" << std::endl, 0);
		if (!str.compare("EXIT"))
			break;
		else if (!str.compare("ADD"))
		{
			Book.addContact();
			system("clear");
		}
		else if (!str.compare("SEARCH"))
			Book.showContact();
		else
		{
			system("clear");
			std::cerr << "Command unknown, please type one of the following commands" << std::endl;
		}
	}
	return (0);
}