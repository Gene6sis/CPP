/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:45:44 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/18 16:09:09 by adben-mc         ###   ########.fr       */
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
		void	print(int index);
		void	set_value(int id);
		int		set_last(std::string name);
		int		set_first(std::string name);
		int		set_nickname(std::string name);
		int		set_secret(std::string name);
		int		set_phone(std::string name);

	private :
		int			_index;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string _secret;
		std::string _phone;

};

#endif