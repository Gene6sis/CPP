/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:17:18 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/26 23:10:58 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

	public :
		Fixed(void);
		Fixed(int integer);
		Fixed(float floatager);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed & operator=(Fixed const & rhs);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int toInt( void ) const;
		float toFloat( void ) const;

	private :
		int _val;
		static int const _val_const = 8;

};

std::ostream &operator<<( std::ostream &out, Fixed const &fixed);

#endif