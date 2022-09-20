/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:49:10 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/19 15:34:45 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){
	// std::cout << "Constuctor Contact called" << std::endl;
	_index = 42;
	return ;
}

Contact::~Contact(void){
	// std::cout << "Destructor Contact called" << std::endl;
	return ;
}

int	Contact::set_first(std::string name){
	if (name.empty())
		return (std::cerr << "Empty first name" << std::endl, 1);
	_first_name = name;
	return (0);
}

int	Contact::set_last(std::string name){
	if (name.empty())
		return (std::cerr << "Empty last name" << std::endl, 1);
	_last_name = name;
	return (0);
}

int	Contact::set_nickname(std::string name){
	if (name.empty())
		return (std::cerr << "Empty nickname" << std::endl, 1);
	// for (int i = 0; name[i]; i++)
	// {
		
	// }
	_nickname = name;
	return (0);
}

int	Contact::set_phone(std::string name){
	if (name.empty())
		return (std::cerr << "Empty phone number" << std::endl, 1);
	_phone = name;
	return (0);
}

int	Contact::set_secret(std::string name){
	if (name.empty())
		return (std::cerr << "Empty secret" << std::endl, 1);
	_secret = name;
	return (0);
}

void	space_or_point(std::string str)
{
	int size = str.length();
	if (size < 10)
		for (int i = size; i < 10; i++)
			std::cout << " ";
	std::cout << str.substr(0, 9 + (str.length() == 10));
	if (size > 10)
		std::cout << ".";
}

void	Contact::print(int index){
	std::cout << "|";
	std::cout << "         " << index;
	std::cout << "|";
	space_or_point(_first_name);
	std::cout << "|";
	space_or_point(_last_name);
	std::cout << "|";
	space_or_point(_nickname);
	std::cout << "|" << std::endl;
}

void	Contact::set_value(int id){
	_index = id;
	_first_name.clear();
	_nickname.clear();
	_last_name.clear();
	_secret.clear();
	_phone.clear();
}


void	Contact::printinfo(void){
	std::cout << "First name : " << _first_name << std::endl;
	std::cout << "Last name : " << _last_name << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone number : " << _phone << std::endl;
	std::cout << "Darkest secret : " << _secret << std::endl;
}