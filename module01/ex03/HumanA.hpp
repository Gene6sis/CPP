/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:50:08 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/16 18:27:03 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA {

	public : 
		HumanA(std::string type, Weapon &weapon);
		~HumanA();
		void		attack();

	private : 
		std::string _name;
		Weapon		&_weapon;

};

#endif