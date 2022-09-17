/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:49:10 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/17 12:37:10 by adben-mc         ###   ########.fr       */
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

void	Contact::print_id(void){
	std::cout << "my id : " << this->index << std::endl;
}

void	Contact::set_id(int id){
	this->index = id;
}