/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:45:44 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/15 16:28:41 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact{

public:

	
	public :
		Contact();
		~Contact();
		
	private : 
		int index;
		std::string first_name;
		std::string last_name;
		std::string nickname;

};

#endif