/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:36:56 by adben-mc          #+#    #+#             */
/*   Updated: 2022/09/24 21:38:29 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>

class Harl {

	public :
		Harl();
		void complain(std::string level);

	private :
		typedef void (Harl::*Fonction)(void);
		typedef struct {
			std::string fonction_name;
			Fonction fonction_ptr;
		} Map;
		void debug(void)
		{
			// std::cout << "debug" << std::endl;
			std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
		};
		void info(void)
		{
			// std::cout << "info" << std::endl;
			std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
		};
		void warning(void)
		{
			// std::cout << "warning" << std::endl;
			std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
		};
		void error(void)
		{
			// std::cout << "error" << std::endl;
			std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
		};
		
};

#endif