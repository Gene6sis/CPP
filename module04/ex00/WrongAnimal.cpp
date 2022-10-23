/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:24:41 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/22 02:24:59 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	std::cout << "Constructor WrongAnimal" << std::endl;
	_type = "Unknown WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "Constructor copy WrongAnimal" << std::endl;
	_type = src.getType();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	this->_type = rhs.getType();
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string	WrongAnimal::getType(void) const{
	return (_type);
}

void	WrongAnimal::makeSound(void) const{
	std::cout << "Making sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */