/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:36:56 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/23 23:41:58 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon {

	public : 
		Weapon();
		Weapon(std::string type);
		~Weapon();
		void		setType(std::string type);
		std::string getType() const;

	private : 
		std::string _type;

};

#endif