/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:23:11 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/05 23:46:42 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	{
		std::cout << "\e[0;33m===== Basic test =====\e[0m" << std::endl;
		Bureaucrat george = Bureaucrat("George", 35);
		std::cout << george << std::endl;
		george.increase();
		std::cout << george << std::endl;
		george.increase(10);
		std::cout << george << std::endl;
		george.decrease();
		std::cout << george << std::endl;
		george.decrease(10);
		std::cout << george << std::endl;
	}
	{
		std::cout << "\e[0;33m===== Constructor test =====\e[0m" << std::endl;
		try
		{
			Bureaucrat george = Bureaucrat("George", 35);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		try
		{
			Bureaucrat george = Bureaucrat("George", 1);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		try
		{
			Bureaucrat george = Bureaucrat("George", 150);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		try
		{
			Bureaucrat george = Bureaucrat("George", 0);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		try
		{
			Bureaucrat george = Bureaucrat("George", 167);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
	}
	{
		std::cout << "\e[0;33m===== Increment test =====\e[0m" << std::endl;
		Bureaucrat george = Bureaucrat("George", 2);
		try
		{
			george.increase();
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		std::cout << george << std::endl;
		try
		{
			george.increase();
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		std::cout << george << std::endl;
		try
		{
			george.increase();
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
	}
	{
		std::cout << "\e[0;33m===== Decrement test =====\e[0m" << std::endl;
		Bureaucrat george = Bureaucrat("George", 149);
		try
		{
			george.decrease();
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		std::cout << george << std::endl;
		try
		{
			george.decrease();
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		std::cout << george << std::endl;
		try
		{
			george.decrease();
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
	}
}