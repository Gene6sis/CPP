/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:47:47 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/19 12:47:17 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <string.h>
# include <string>
# include <cstdlib>

class PhoneBook{

public:


	public :
		PhoneBook(void);
		~PhoneBook(void);
		void	display_contacts(void);
		void	showContact(void);
		void	addContact(void);

	private :
		int		_number;
		Contact	_contacts[8];

};

#endif