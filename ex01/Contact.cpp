/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:49:10 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/17 13:32:30 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){
	std::cout << "Constuctor Contact called" << std::endl;
	this->index = 42;
	return ;
}

Contact::~Contact(void){
	std::cout << "Destructor Contact called" << std::endl;
	return ;
}

void	Contact::print(void){
	std::cout << "my id : " << this->index << std::endl;
	std::cout << "my first : " << this->first_name << std::endl;
	std::cout << "my nick : " << this->nickname << std::endl;
	std::cout << "my last : " << this->last_name << std::endl;
}

void	Contact::set_value(int id){
	this->index = id;
	this->first_name.clear();
	this->nickname.clear();
	this->last_name.clear();
}