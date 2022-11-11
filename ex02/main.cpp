/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:37:32 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/11 20:48:36 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int		main(void) {

	std::cout << std::endl << "============================================================" << std::endl;
	std::cout <<  " Basic Tests " << std::endl;
	ClapTrap	clapTrap("Tim");
	ScavTrap	scavTrap;

	scavTrap.attack("Kostas");
	clapTrap.attack("Vlad");
	scavTrap.guardGate();
	scavTrap.takeDamage(30);
	scavTrap.beRepaired(10);
	scavTrap.takeDamage(50);
	scavTrap.takeDamage(40);
	scavTrap.takeDamage(10);
	scavTrap.beRepaired(1);
	scavTrap.attack("Cat");
	clapTrap.beRepaired(5);


	// std::cout << std::endl << "============================================================" << std::endl;
	// std::cout << std::endl << " Copying " << std::endl;
	// ScavTrap	scavTrap;

	// scavTrap.takeDamage(30);
	// ScavTrap	cat2("Cat");
	// cat2 = scavTrap;
	// cat2.attack("Dog");
	// ScavTrap	dog(scavTrap);


	// std::cout << std::endl << "============================================================" << std::endl;
	// std::cout << std::endl << "*** Repair and attack limits ***" << std::endl;
	// ScavTrap	ScavTrap;

	// for (int i = 0; i < 50; i++)
	// {
	// 	scavTrap.attack("clouds");
	// 	scavTrap.beRepaired(10);
	// 	scavTrap.attack("clouds");
	// 	scavTrap.takeDamage(100);
	// 	scavTrap.takeDamage(100);
	// }
}
