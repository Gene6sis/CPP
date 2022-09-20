/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:04:45 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/20 22:21:27 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact{

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
		void	printinfo(void);

	private :
		int			_index;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string _secret;
		std::string _phone;
};

#endif