/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:47:47 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/17 12:22:38 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
class PhoneBook{

public:


	public :
		PhoneBook(void);
		~PhoneBook(void);
		void	display_contacts(void);

	private : 
		Contact	contacts[8];

};

#endif