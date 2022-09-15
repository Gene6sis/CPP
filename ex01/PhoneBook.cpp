/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:51:08 by adben-mc          #+#    #+#             */
/*   Updated: 2022/08/29 23:51:22 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	std::cout << "Constuctor PhoneBook called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void){
	std::cout << "Destructor PhoneBook called" << std::endl;
	return ;
}
