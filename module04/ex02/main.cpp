/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:39:45 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/22 06:11:38 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// {
	// 	std::cout << "===== Virtual test =====" << std::endl;
	// 	AAnimal animal = AAnimal();
	// }
	{
		std::cout << "===== Basic test =====" << std::endl;
		const AAnimal* cat = new Cat();
		delete(cat);
	}
	return 0;
}