/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:47:04 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/02 19:51:41 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void){
	std::cout << "Constuctor void Frag called" << std::endl;
	_name = "Unknown";
	_hit_point = 100;
	_energy_point = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(std::string name){
	std::cout << "Constuctor string Frag called" << std::endl;
	_name = name;
	_hit_point = 100;
	_energy_point = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &trap){
	std::cout << "Constuctor copy Frag called" << std::endl;
	*this=trap;
}

FragTrap::~FragTrap(void){
	std::cout << "Destructor Frag called" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << _name << " high fives" << std::endl;
}

FragTrap	FragTrap::operator=(FragTrap const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_point = rhs._hit_point;
		this->_energy_point = rhs._energy_point;
		this->_attack_damage = rhs._attack_damage;
	}
	return (*this);
}
