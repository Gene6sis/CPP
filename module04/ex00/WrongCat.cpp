/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 01:05:22 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/22 02:25:43 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	std::cout << "Constructor WrongCat" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat & src ) : WrongAnimal(src)
{
	std::cout << "Constructor copy WrongCat" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	this->_type = rhs.getType();
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, WrongCat const & i )
// {
// 	o << i.getType();
// 	return o;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongCat::makeSound(void) const{
	std::cout << "WrongCat sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */