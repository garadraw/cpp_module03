/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:25:23 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/11 22:10:01 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Canonical */
ClapTrap::ClapTrap() : _name("Tim"), _hit_points(init_hit_points), _energy_points(init_energy_points), _attack_damage(init_attack_damage), _max_hit_points(init_hit_points)
{
	std::cout << "ClapTrap Void Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap Copy Class Constructor Called" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(init_hit_points), _energy_points(init_energy_points), _attack_damage(init_attack_damage), _max_hit_points(init_hit_points)
{
	std::cout << "ClapTrap String Constructor Called" << std::endl;
	std::cout << _name << " is Ready for Battle" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	this->_name = src._name;
	this->_attack_damage = src._attack_damage;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_max_hit_points = src._max_hit_points;
	std::cout << this->_name << " is the same as " << src._name << std::endl;
	std::cout << "HP " << this->_hit_points << " EP " << this->_energy_points << std::endl;
	return *this;
}
	
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor Called" << std::endl;
}



/* Public Functions */
void	ClapTrap::attack(const std::string &target)
{
	std::cout << "Attack Function Called" << std::endl;
	if (this->_energy_points > 0 && this->_hit_points > 0){
		std::cout << "ClapTrap \'" << this->_name;
		std::cout << "\' attacks " << target;
		std::cout << " causing " << this->_attack_damage << " points of damage" << std::endl;
		this->_energy_points -= 1;
		std::cout << "HP " << this->_hit_points << " EP " << this->_energy_points << std::endl;
}
	else
		std::cout << "ClapTrap " << this->_name << " unable to perform action" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energy_points > 0 && this->_hit_points > 0){
		std::cout << this->_name;
		std::cout << " takes " << amount << " points of damage" << std::endl;
		this->_hit_points -= amount;
		if (this->_hit_points < 0)
			this->_hit_points = 0;
		std::cout << "HP " << this->_hit_points << " EP " << this->_energy_points << std::endl;
	}
	else
		std::cout << this->_name << " lethaly damaged" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0 && this->_hit_points > 0){
		std::cout << this->_name;
		std::cout << "\' repairs himself for " << amount << " points" << std::endl;
		this->_hit_points += amount;
		if (this->_hit_points > this->_max_hit_points)
			this->_hit_points = this->_max_hit_points;
		this->_energy_points -= 1;
		std::cout << "HP " << this->_hit_points << " EP " << this->_energy_points << std::endl;
	}
	else
		std::cout << this->_name << " unable to repair" << std::endl;
	}
