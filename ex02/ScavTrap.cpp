/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:17:17 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/11 22:08:26 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Canonical */
ScavTrap::ScavTrap(): ClapTrap("Kostas"){
	std::cout << "ScavTrap Void Constructor called" << std::endl;
	this->_hit_points = this->init_hit_points;
	this->_energy_points = this->init_energy_points;
	this->_attack_damage = this->init_attack_damage;
	this->_max_hit_points = init_hit_points;
	std::cout << _name << " has updated to ScavTrap" << std::endl;
	std::cout << "HP " << this->_hit_points << " EP " << this->_energy_points << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hit_points = this->init_hit_points;
	this->_energy_points = this->init_energy_points;
	this->_attack_damage = this->init_attack_damage;
	this->_max_hit_points = init_hit_points;
	std::cout << "ScavTrap " << _name << " has appeared" << std::endl;
	std::cout << "HP " << this->_hit_points << " EP " << this->_energy_points << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src._name)
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	this->_name = src._name + "Copy";
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	this->_max_hit_points = src._max_hit_points;
	std::cout << src._name << " duplicates as " << _name << std::endl;
	std::cout << "HP " << this->_hit_points << " EP " << this->_energy_points << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &src){
	this->_name = src._name;
	this->_attack_damage = src._attack_damage;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_max_hit_points = src._max_hit_points;
	std::cout << this->_name << " is the same as " << src._name << std::endl;
	std::cout << "HP " << this->_hit_points << " EP " << this->_energy_points << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}


/* Public Functions */
void	ScavTrap::guardGate()
{
	std::cout << "Guard Gate Function Called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0){
		std::cout << "ScavTrap \'" << this->_name;
		std::cout << "\' attacks " << target;
		std::cout << " causing " << this->_attack_damage << " points of damage" << std::endl;
			this->_energy_points -= 1;
		std::cout << "HP " << this->_hit_points << " EP " << this->_energy_points << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " unable to attack" << std::endl;
}
