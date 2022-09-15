/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:49:10 by adben-mc          #+#    #+#             */
/*   Updated: 2022/08/29 23:50:56 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){
	std::cout << "Constuctor Contact called" << std::endl;
	return ;
}

Contact::~Contact(void){
	std::cout << "Destructor Contact called" << std::endl;
	return ;
}
