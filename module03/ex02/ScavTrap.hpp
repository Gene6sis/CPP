/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 00:52:20 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/21 18:14:31 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public :
		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const &trap);
		~ScavTrap(void);
		void 		attack(const std::string &target);
		ScavTrap	operator=(ScavTrap const &rhs);
		void		guardGate(void);

};

#endif