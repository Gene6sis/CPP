/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:43:55 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/21 18:14:27 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public :
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(FragTrap const &trap);
		~FragTrap(void);
		FragTrap	operator=(FragTrap const &rhs);
		void		highFivesGuys(void);
};

#endif