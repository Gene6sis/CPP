/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:51:08 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/18 16:19:18 by adben-mc         ###   ########.fr       */
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

void	PhoneBook::addContact(void){
	std::string str;
	
	if (_number == 8)
	{
		for (int i = 1; i < 8; i++)
			_contacts[i - 1] = _contacts[i];
		_number = 7;
	}
	std::cout << "Please enter contact informations" << std::endl;
	while (1) // first_name
	{
		std::cout << "First name (prenom) : ";
		std::getline(std::cin, str);
		if (!_contacts[_number].set_first(str))
			break ;
	}
	while (1) // last_name
	{
		std::cout << "Last name (nom) : ";
		std::getline(std::cin, str);
		if (!_contacts[_number].set_last(str))
			break ;
	}
	while (1) // nick_name
	{
		std::cout << "Nick name (surnom) : ";
		std::getline(std::cin, str);
		if (!_contacts[_number].set_nickname(str))
			break ;
	}
	while (1) // phone number
	{
		std::cout << "Phone number (ton 06) : ";
		std::getline(std::cin, str);
		if (!_contacts[_number].set_phone(str))
			break ;
	}
	while (1) // secret
	{
		std::cout << "Darkest secret (t'as compris) : ";
		std::getline(std::cin, str);
		if (!_contacts[_number].set_secret(str))
			break ;
	}
	_number++;
}

void	PhoneBook::showContact(void){
	std::cout << "|Index     |First Name|Last Name |Nickname  |" << std::endl;
	for (int i = 0; i < _number; i++)
	{
		_contacts[i].print(i);
	}
}