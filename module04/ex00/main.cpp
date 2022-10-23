/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:39:45 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/22 03:51:50 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

# define WHITE "\e[0m"
# define BLACK "\e[0;30m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[0;33m"
# define BLUE "\e[0;34m"
# define PURPLE "\e[0;35m"
# define CYAN "\e[0;36m"

# define BWHITE "\e[1m"
# define BGRAY "\e[1;29m"
# define BBLACK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGREEN "\e[1;32m"
# define BYELLOW "\e[1;33m"
# define BBLUE "\e[1;34m"
# define BPURPLE "\e[1;35m"
# define BCYAN "\e[1;36m"


int main()
{
	{
		std::cout << "------------- Animal test -------------" << std::endl;
		const Animal* meta = new Animal();
		const Animal* Chien = new Dog();
		const Animal* Chat = new Cat();
		std::cout << Chien->getType() << GREEN " Chien" WHITE << std::endl;
		Chien->makeSound();
		std::cout << Chat->getType() << GREEN " Chat" WHITE << std::endl;
		Chat->makeSound(); //will output the cat sound!
		std::cout << GREEN "Animal" WHITE << std::endl;
		meta->makeSound();

		delete Chat;
		delete Chien;
		delete meta;
	}
	{
		std::cout << "------------- Wrong animal test -------------" << std::endl;

		const WrongAnimal* WAnimal = new WrongAnimal();
		const WrongAnimal* WCat = new WrongCat();
		std::cout << WCat->getType() << GREEN " WrongCat" WHITE << std::endl;
		WCat->makeSound(); //will output the cat sound!
		std::cout << GREEN "WrongAnimal" WHITE << std::endl;
		WAnimal->makeSound();

		delete WAnimal;
		delete WCat;
	}
	return 0;
}