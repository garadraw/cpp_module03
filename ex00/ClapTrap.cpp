/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:25:23 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/10 17:27:17 by vsimeono         ###   ########.fr       */
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

	ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(MAX_HP), _energy_points(MAX_EP), _attack_damage(MAX_AD)
	{
		std::cout << " is Ready for Battle" << std::endl;
		this->_hit_points = 10;
		this->_energy_points = 10;
		this->_attack_damage = 0;
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
	
	~ClapTrap()
	{
		std::cout << "Destructor Called" << std::endl;
	}

	void	ClapTrap::attack(const std::string &target)
	{
		std::cout << "Attack Function Called" << std::endl;
		if(this->_hit_points <= 0)
		{
			std::cout << "Player is already Dead" << std::endl;
		}
		if(this->_energy_points > 0)
		{
			std::cout << this->getName() << " Attacks " << target
			<< "Causing a damage of " << this->_attack_damage << std::endl;
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
		std::cout << "Player takes a damage of " << amount << std::endl;
	}

	void	ClapTrap::beRepaired(unsigned int amount)
	{
		if (this->_energy_points > 0 && this->_health_points && this->_healt_points < 10)
		{
			this->_energy_points--;
			this->_hit_points += amount;
			if (this->_health_points > 10)
			{
				this->_health_points = 10;
				std::cout << "Player is already at Maximum Health" << std::endl;
			}
			if ()
		}
		
		
		if (this->_energy_points <= 0)
		{
			std::cout << "Player needs more Energy to Heal" << std::endl;
		}
		
		std::cout << "Repair Function Called" << std::endl;
		this->energy_points = energy_points - 1;
		this->hit_points = amount;
	}
	



	

		
	