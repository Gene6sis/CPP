/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:51:08 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/19 15:48:16 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	// std::cout << "Constuctor PhoneBook called" << std::endl;
	_number = 0;
	for (int i = 0; i < 8; i++)
		_contacts[i].set_value(i);
	return ;
}

PhoneBook::~PhoneBook(void){
	// std::cout << "Destructor PhoneBook called" << std::endl;
	return ;
}

void	PhoneBook::display_contacts(void){
	for (int i = 0; i < 8; i++)
		_contacts[i].print(i);
}

int have_char(std::string str)
{
	unsigned long c = 0;

	for (unsigned long i = 0; i < str.length(); i++)
		if (std::isspace(str[i]))
			c++;
	if (c == str.length())
		return (0);
	return (1);
}

void	PhoneBook::addContact(void){
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string secret;
	std::string phone;
	
	std::cout << "Please enter contact informations" << std::endl;
	while (!std::cin.eof()) // first_name
	{
		std::cout << "First name (prenom) : ";
		std::getline(std::cin, first_name);
		if (std::cin.eof())
			return ;
		if (first_name.empty() || !have_char(first_name))
		{
			std::cerr << "Empty first name" << std::endl;
			continue ;
		}
		break ;
	}
	while (!std::cin.eof()) // last_name
	{
		std::cout << "Last name (nom) : ";
		std::getline(std::cin, last_name);
		if (std::cin.eof())
			return ;
		if (last_name.empty() || !have_char(last_name))
		{
			std::cerr << "Empty last name" << std::endl;
			continue ;
		}
		break ;
	}
	while (!std::cin.eof()) // nick_name
	{
		std::cout << "Nick name (surnom) : ";
		std::getline(std::cin, nickname);
		if (std::cin.eof())
			return ;
		if (nickname.empty() || !have_char(nickname))
		{
			std::cerr << "Empty nickname" << std::endl;
			continue ;
		}
		break ;
	}
	while (!std::cin.eof()) // phone number
	{
		std::cout << "Phone number (ton 06) : ";
		std::getline(std::cin, phone);
		if (std::cin.eof())
			return ;
		if (phone.empty() || !have_char(phone) )
		{
			std::cerr << "Empty phone number" << std::endl;
			continue ;
		}
		break ;
	}
	while (!std::cin.eof()) // secret
	{
		std::cout << "Darkest secret (t'as compris) : ";
		std::getline(std::cin, secret);
		if (std::cin.eof())
			return ;
		if (secret.empty() || !have_char(secret))
		{
			std::cerr << "Empty secret" << std::endl;
			continue ;
		}
		break ;
	}
	if (_number == 8)
	{
		for (int i = 1; i < 8; i++)
			_contacts[i - 1] = _contacts[i];
		_number = 7;
	}
	_contacts[_number].set_first(first_name);
	_contacts[_number].set_last(last_name);
	_contacts[_number].set_nickname(nickname);
	_contacts[_number].set_phone(phone);
	_contacts[_number].set_secret(secret);
	_number++;
}

void	PhoneBook::showContact(void){
	std::string str;
	int digit;
	int error;

	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < _number; i++)
		_contacts[i].print(i + 1);
	if (_number == 0)
	{
		std::cout << "No contact registered" << std::endl << std::endl;
		return ;
	}
	while (!std::cin.eof())
	{
		error = 0;
		std::cout << "Search ID number : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return ;
		if (str.empty())
		{
			std::cerr << "Empty first name" << std::endl;
			continue ;
		}
		if (str.length() > 1)
		{
			std::cerr << "Number out of range" << std::endl;
			continue ;
		}
		for (unsigned long i = 0; i < str.length(); i++)
		{
			if (!std::isdigit(str[i]))
			{
				std::cerr << "Only digit are accepted" << std::endl;
				error = 1;
				break ;
			}
		}
		if (error == 1)
			continue ;
		digit = (int)str[0] - '0';
		if (digit == 0)
		{
			std::cerr << "Range start at 1" << std::endl;
			continue ;
		}
		if (digit > _number)
		{
			std::cerr << "Digit out of range" << std::endl;
			continue ;
		}
		break ;
	}
	system("clear");
	_contacts[digit - 1].printinfo();
	std::cout << std::endl;
}