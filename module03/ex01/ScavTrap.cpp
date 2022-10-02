/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 00:52:24 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/02 19:46:47 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
	std::cout << "Constuctor void Scav called" << std::endl;
	_name = "Unknown";
	_hit_point = 100;
	_energy_point = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name){
	std::cout << "Constuctor string Scav called" << std::endl;
	_name = name;
	_hit_point = 100;
	_energy_point = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &trap){
	std::cout << "Constuctor copy Scav called" << std::endl;
	*this=trap;
}

ScavTrap::~ScavTrap(void){
	std::cout << "Destructor Scav called" << std::endl;
}

void ScavTrap::attack(const std::string &target){
	if (_hit_point <= 0)
	{
		std::cout <<  "ScavTrap " << _name << " can't attack when he is dead" << std::endl;
		return ;
	}
	if (_energy_point <= 0)
	{
		std::cout <<  "ScavTrap " << _name << " don't have enough energy to attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks "
	<< target << ", causing " << _attack_damage
	<< " points of damage !" << std::endl;
	_energy_point -= 1;
}


void ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode" << std::endl;
}

ScavTrap	ScavTrap::operator=(ScavTrap const & rhs) {
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
