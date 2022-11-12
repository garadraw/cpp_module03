/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:06:53 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/12 15:49:49 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{	
		static const int	init_hit_points = 100;
		static const int	init_energy_points = 100;
		static const int	init_attack_damage = 30;
	
	public:
	
		FragTrap();
		FragTrap( std::string name );
		~FragTrap();
		FragTrap(const FragTrap &obj);
		FragTrap& operator=(const FragTrap &obj);
		
		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif