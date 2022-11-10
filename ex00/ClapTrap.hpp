/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:17:57 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/10 17:01:10 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define MAX_HP 10
#define MAX_EP 10
#define MAX_AD 0

#include <iostream>

class ClapTrap
{
	private:
		std::string		_name;
		int				_hit_points;
		int				_energy_points;
		int				_attack_damage;
	
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		ClapTrap &operator=(ClapTrap const &src);
		~ClapTrap();

	
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
		std::string	getName() const;
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
};

#endif