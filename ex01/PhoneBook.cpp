/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:51:08 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/17 12:37:29 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	std::cout << "Constuctor PhoneBook called" << std::endl;
	for (int i = 0; i < 8; i++)
		this->contacts[i].set_id(i);
	return ;
}

PhoneBook::~PhoneBook(void){
	std::cout << "Destructor PhoneBook called" << std::endl;
	return ;
}

void	PhoneBook::display_contacts(void){
	for (int i = 0; i < 8; i++)
		this->contacts[i].print_id();
}
