/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:24:41 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/05 03:44:29 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << "Constructor Animal" << std::endl;
	type = "Unknown animal";
}

Animal::Animal( const Animal & src )
{
	std::cout << "Constructor copy Animal" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Destructor Animal" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Animal const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string	Animal::getType(void) const{
	return (type);
}

void	Animal::makeSound(void) const{
	std::cout << "Making sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */