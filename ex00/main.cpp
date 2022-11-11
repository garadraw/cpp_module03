/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:37:32 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/11 13:41:28 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	tim("Tim");
	ClapTrap	kostas("Kostas");
	
	tim.attack("Kostas");
	kostas.takeDamage(9);
	kostas.beRepaired(7);
	kostas.beRepaired(7);
	kostas.attack("Tim");
	kostas.beRepaired(7);
	return (0);
}
