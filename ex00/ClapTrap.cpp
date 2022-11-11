/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:25:23 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/11 13:41:41 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

	ClapTrap::ClapTrap()
	{
		std::cout << "Constructor Called" << std::endl;
		this->_hit_points = 10;
		this->_energy_points = 10;
		this->_attack_damage = 0;
	}

	ClapTrap::ClapTrap(ClapTrap const &src)
	{
		std::cout << "Copy Class Constructor Called" << std::endl;
		*this = src;
	}

	ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
	{
		std::cout << _name << " is Ready for Battle" << std::endl;
	}
	
	ClapTrap &ClapTrap::operator=(ClapTrap const &src)
	{
		if (this != &src)
		{
			this->_name = src.getName();
			this->_hit_points = src.getHitPoints();
			this->_energy_points = src.getEnergyPoints();
			this->_attack_damage = src.getAttackDamage();
		}
		return (*this);
	}
	
	ClapTrap::~ClapTrap()
	{
		std::cout << "Destructor Called" << std::endl;
	}

	void	ClapTrap::attack(const std::string &target)
	{
		std::cout << "Attack Function Called" << std::endl;
		if(this->_hit_points <= 0)
		{
			std::cout << "Your Opponent is already Dead" << std::endl;
		}
		if (this->_energy_points <= 0)
		{
			std::cout << this->getName() << "Does not have enough Energy" << std::endl;
		}
		else
		{
			std::cout << this->getName() << " Attacks " << target
			<< " Causing a damage of " << this->_attack_damage << std::endl;
			this->_energy_points--;
		}
	}

	void	ClapTrap::takeDamage(unsigned int amount)
	{
		this->_hit_points = _hit_points - amount;
		if (this->_hit_points <= 0)
		{
			std::cout << "Player is dead" << std::endl;
			return ;
		}
		std::cout << _name << " takes damage of " << amount << std::endl;
	}

	void	ClapTrap::beRepaired(unsigned int amount)
	{
		std::cout << "Repair Function Called" << std::endl;
		if (this->_energy_points > 0 && this->_hit_points > 0 && this->_hit_points < 10)
		{
			this->_energy_points--;
			this->_hit_points += amount;
			if (this->_hit_points >= 10)
			{
				this->_hit_points = 10;
				std::cout << _name << " is now at Maximum Health" << std::endl;
			}
			std::cout << _name << "'s hit points are " << _hit_points << std::endl;
		}
		else if (this->_hit_points == 10)
		{
			std::cout << _name << " is already at Maximum Health" << std::endl;
		}
		else if (this->_hit_points <= 0)
		{
		std::cout << _name << " is already Dead" << std::endl;
		}
		else if (this->_energy_points <= 0)
		{
			std::cout << _name << " needs more Energy to Heal" << std::endl;
		}
	}

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

int		ClapTrap::getHitPoints() const
{
	return (this->_energy_points);
}

int		ClapTrap::getEnergyPoints() const
{
	return (this->_energy_points);
}

int		ClapTrap::getAttackDamage() const
{
	return (this->_attack_damage);
}
