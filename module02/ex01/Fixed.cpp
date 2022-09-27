/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:23:29 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/27 01:08:02 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	_val = 0 << _val_const;
}

Fixed::Fixed(int integer){
	std::cout << "Int constructor called" << std::endl;
	_val = integer << _val_const;
}

Fixed::Fixed(float floateger) {
	std::cout << "Float constructor called" << std::endl;
	_val = roundf(floateger * (1 << _val_const));
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	_val = src.getRawBits();
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}

void Fixed::setRawBits( int const raw ) {
	_val = raw;
}

int Fixed::toInt( void ) const {
	return (_val >> _val_const);
}

float Fixed::toFloat( void ) const {
	return ((float)_val / (float)(1 << _val_const));
}

Fixed &	Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_val = rhs.getRawBits();
	return (*this);
}

std::ostream &operator<<( std::ostream &out, Fixed const &fixed) {
	out << fixed.toFloat();
	return (out);
}