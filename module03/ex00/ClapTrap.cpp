/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 22:06:11 by adben-mc          #+#    #+#             */
/*   Updated: 2022/10/21 19:04:57 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	std::cout << "Constuctor void Clap called" << std::endl;
	_name = "Unknown";
	_hit_point = 10;
	_energy_point = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "Constuctor string Clap called" << std::endl;
	_name = name;
	_hit_point = 10;
	_energy_point = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &trap){
	std::cout << "Constuctor copy Clap called" << std::endl;
	*this=trap;
}

ClapTrap::~ClapTrap(void){
	std::cout << "Destructor Clap called" << std::endl;
}

void ClapTrap::attack(const std::string &target){
	if (_hit_point <= 0)
	{
		std::cout <<  "ClapTrap " << _name << " can't attack when he is dead" << std::endl;
		return ;
	}
	if (_energy_point <= 0)
	{
		std::cout <<  "ClapTrap " << _name << " don't have enough energy to attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks "
	<< target << ", causing " << _attack_damage
	<< " points of damage !" << std::endl;
	_energy_point -= 1;
}

void ClapTrap::takeDamage(unsigned int amount){
	// std::cout << "ClapTrap " << _name << " health : " << _hit_point << std::endl;
	if (_hit_point <= 0)
	{
		std::cout <<  "ClapTrap " << _name << " can't take damage when he is already dead" << std::endl;
		return ;
	}
	_hit_point -= amount;
	if (_hit_point <= 0)
	{
		std::cout <<  "ClapTrap " << _name << " died" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage(s)" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_hit_point <= 0)
	{
		std::cout <<  "ClapTrap " << _name << " can't take be repaired when he is already dead" << std::endl;
		return ;
	}
	if (_energy_point <= 0)
	{
		std::cout <<  "ClapTrap " << _name << " don't have enough energy to be repaired" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " heal himself "
	<< amount << " pv" << std::endl;
	_hit_point += amount;
	_energy_point -= 1;
}


ClapTrap	ClapTrap::operator=(ClapTrap const & rhs) {
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
