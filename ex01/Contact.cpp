/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:49:10 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/18 17:18:49 by adben-mc         ###   ########.fr       */
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

void	space_or_point(int size)
{
	if (size < 10)
		for (int i = size; i < 10; i++)
			std::cout << " ";
	if (size > 10)
		std::cout << ".";
}

void	Contact::print(int index){
	std::cout << "|";
	std::cout << index << "         ";
	std::cout << "|";
	std::cout << _first_name.substr(0, 9 + (_first_name.length() == 10));
	space_or_point(_first_name.length());
	std::cout << "|";
	std::cout << _last_name.substr(0, 9 + (_last_name.length() == 10));
	space_or_point(_last_name.length());
	std::cout << "|";
	std::cout << _nickname.substr(0, 9 + (_nickname.length() == 10));
	space_or_point(_nickname.length());
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