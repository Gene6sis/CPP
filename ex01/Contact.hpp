/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:45:44 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/17 12:36:58 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact{

public:

	public :
		Contact(void);
		~Contact(void);
		void	print_id();
		void	set_id(int id);

	private :
		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;

};

#endif