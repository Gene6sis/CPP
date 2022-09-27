/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:31:23 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/27 03:06:32 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	return (0);
}

// int main()
// {
// 	Fixed a(10);
// 	Fixed b(42.42f);
// 	Fixed c(a);
	
// 	std::cout << "========= Comparison tests =========" << std::endl;
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "a == b : " << (a == b ? "true" : "false") << std::endl;
// 	std::cout << "a == c : " << (a == c ? "true" : "false") << std::endl;
// 	std::cout << "a != b : " << (a != b ? "true" : "false") << std::endl;
// 	std::cout << "a != c : " << (a != c ? "true" : "false") << std::endl;
// 	std::cout << "a > b : " << (a > b ? "true" : "false") << std::endl;
// 	std::cout << "b > a : " << (b > a ? "true" : "false") << std::endl;
// 	std::cout << "a > c : " << (a > c ? "true" : "false") << std::endl;
// 	std::cout << "a >= b : " << (a >= b ? "true" : "false") << std::endl;
// 	std::cout << "b >= a : " << (b >= a ? "true" : "false") << std::endl;
// 	std::cout << "a >= c : " << (a >= c ? "true" : "false") << std::endl;
// 	std::cout << "a < b : " << (a < b ? "true" : "false") << std::endl;
// 	std::cout << "b < a : " << (b < a ? "true" : "false") << std::endl;
// 	std::cout << "a < c : " << (a < c ? "true" : "false") << std::endl;
// 	std::cout << "a <= b : " << (a <= b ? "true" : "false") << std::endl;
// 	std::cout << "b <= a : " << (b <= a ? "true" : "false") << std::endl;
// 	std::cout << "a <= c : " << (a <= c ? "true" : "false") << std::endl;
	
// 	std::cout << std::endl;
// 	a = Fixed(5);
// 	b = Fixed(5.5f);
// 	c = Fixed(2.5f);
// 	std::cout << "========= Arithmetic tests =========" << std::endl;
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "a + b = " << a + b << std::endl;
// 	std::cout << "b - c = " << b - c << std::endl;
// 	std::cout << "a * c = " << a * c << std::endl;
// 	std::cout << "a / c = " << a / c << std::endl;
// 	a = Fixed(0);
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "Post increment: " << a++ << std::endl;
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "Pre increment: " << ++a << std::endl;
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "Post decrement: " << a-- << std::endl;
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "Pre decrement: " << --a << std::endl;
// 	std::cout << "a is " << a << std::endl;

// 	std::cout << std::endl;
// 	a = Fixed(2.5f);
// 	b = Fixed(5.5f);
// 	std::cout << "========= Functions tests =========" << std::endl;
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
// 	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
// }





// int main( void ) {
// Fixed a;
// Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
// Fixed c( Fixed( 5.05f ) + Fixed( 2 ) );
// Fixed const d( Fixed( 5.05f ) - Fixed( 2 ) );
// Fixed const e( Fixed( 5.05f ) / Fixed( 2 ) );


// std::cout <<  "----------------------------------------------" <<  std::endl;
// std::cout <<  "valeur de a quand init sans parametre" <<  std::endl;
// std::cout << a << std::endl << std::endl;

// std::cout <<  "----------------------------------------------" <<  std::endl;
// std::cout <<  "valeur de ++a" <<  std::endl;
// std::cout << ++a << std::endl;
// std::cout <<  "valeur de a apres le ++a" <<  std::endl;
// std::cout << a << std::endl << std::endl;

// std::cout <<  "----------------------------------------------" <<  std::endl;
// std::cout <<  "valeur de a++" <<  std::endl;
// std::cout << a++ << std::endl;
// std::cout <<  "valeur de a apres le a++" <<  std::endl;
// std::cout << a << std::endl << std::endl;

// std::cout <<  "----------------------------------------------" <<  std::endl;
// std::cout <<  "valeur de 5.05078 * 2" <<  std::endl;
// std::cout << b << std::endl << std::endl;

// std::cout <<  "----------------------------------------------" <<  std::endl;
// std::cout <<  "valeur de 5.05078 + 2" <<  std::endl;
// std::cout << c << std::endl << std::endl;

// std::cout <<  "----------------------------------------------" <<  std::endl;
// std::cout <<  "valeur de 5.05078 - 2" <<  std::endl;
// std::cout << d << std::endl << std::endl;

// std::cout <<  "----------------------------------------------" <<  std::endl;
// std::cout <<  "valeur de 5.05078 / 2" <<  std::endl;
// std::cout << e << std::endl << std::endl;

// std::cout <<  "----------------------------------------------" <<  std::endl;
// std::cout <<  "10.1016 < 7.05078?" <<  std::endl;
// if (b < c)
// 	std::cout << "vrai" << std::endl << std::endl;
// else
// 	std::cout << "faux" << std::endl << std::endl;


// std::cout <<  "----------------------------------------------" <<  std::endl;
// std::cout <<  "valeur max entre  0.0078125 et 10.1016" <<  std::endl;
// std::cout << a << std::endl;
// std::cout << e << std::endl;
// std::cout << Fixed::max( a, e ) << std::endl << std::endl;
// return 0;
// }



