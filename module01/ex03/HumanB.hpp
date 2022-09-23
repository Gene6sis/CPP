/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:58:15 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/24 00:11:59 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB {

	public : 
		HumanB(std::string type);
		~HumanB();
		void		setWeapon(Weapon &weapon);
		void		attack();

	private : 
		std::string _name;
		Weapon		*_weapon;

};

#endif