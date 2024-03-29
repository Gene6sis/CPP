/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 22:06:23 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/22 01:31:39 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap {

	public : 
		ClapTrap(void);
		ClapTrap(std::string const name);
		~ClapTrap(void);
		ClapTrap(ClapTrap const &trap);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap operator=(ClapTrap const &rhs);

		std::string getName(void) const;
		int			getPv(void) const;
		int			getEnergy(void) const;
		int			getAttack(void) const;
		

	private : 
		std::string	_name;
		int			_hit_point;
		int			_energy_point;
		int			_attack_damage;

};

std::ostream &operator<<( std::ostream &out, ClapTrap const &fixed);

#endif