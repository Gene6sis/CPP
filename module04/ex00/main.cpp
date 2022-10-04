/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:39:45 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/05 01:16:00 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* Chien = new Dog();
	const Animal* Chat = new Cat();
	std::cout << Chien->getType() << " " << std::endl;
	std::cout << Chat->getType() << " " << std::endl;
	Chien->makeSound();
	Chat->makeSound(); //will output the cat sound!
	meta->makeSound();

	delete Chat;
	delete Chien;
	delete meta;

	std::cout << std::endl << "------" << std::endl << std::endl;

	const WrongAnimal* WAnimal = new WrongAnimal();
	const WrongAnimal* WCat = new WrongCat();
	std::cout << WCat->getType() << " " << std::endl;
	WCat->makeSound(); //will output the cat sound!
	WAnimal->makeSound();

	delete WAnimal;
	delete WCat;
	
	return (0);
}