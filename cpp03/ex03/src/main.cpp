/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:33:53 by eahn              #+#    #+#             */
/*   Updated: 2024/11/19 22:36:04 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

int main()
{
	// Create DiamondTrap object
	std::cout << "--- Creating DiamondTrap Dada ---" << std::endl;
	DiamondTrap dada("Dada");

	// Test attack function from ScavTrap
	std::cout << "\n--- Testing attack (from ScavTrap) ---" << std::endl;
	dada.attack("Enemy"); 

	// Test guardGate function from ScavTrap
	std::cout << "\n--- Testing guardGate (from ScavTrap) ---" << std::endl;
	dada.guardGate();

	// Test highFivesGuys function from FragTrap
	std::cout << "\n--- Testing highFivesGuys (from FragTrap) ---" << std::endl;
	dada.highFivesGuys();

	// Test whoAmI function from DiamondTrap (unique)
	std::cout << "\n--- Testing whoAmI (DiamondTrap unique method) ---" << std::endl;
	dada.whoAmI();

	// Test copy constructor
	std::cout << "\n--- Testing copy constructor ---" << std::endl;
	DiamondTrap dadaCopy(dada);

	// Test assignment operator
	std::cout << "\n--- Testing assignment operator ---" << std::endl;
	DiamondTrap anotherDada;
	anotherDada = dada;
	// Inherited ClapTrap::operator=(other) allows to copy ClapTrap members

	// Destructors
	std::cout << "\n--- Destructors ---" << std::endl;

	return 0;
}

/**
 * 
[Destructor] ClapTrap Mimi has been destroyed.  // clap4
[Destructor] ClapTrap Lulu has been destroyed.  // clap3
[Destructor] ClapTrap Mimi has been destroyed.  // clap2
[Destructor] ClapTrap Lulu has been destroyed.  // clap1
 */
