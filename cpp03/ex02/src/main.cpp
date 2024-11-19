/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:33:53 by eahn              #+#    #+#             */
/*   Updated: 2024/11/19 22:07:30 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

int main()
{
	// Create FragTrap object
	std::cout << "--- Creating FragTrap Fofo ---" << std::endl;
	FragTrap fofo("Fofo");

	// Test inherited attack function
	std::cout << "\n--- Testing attack ---" << std::endl;
	fofo.attack("Enemy"); // ClapTrap Fofo attack

	// Test highFivesGuys function
	std::cout << "\n--- Testing highFivesGuys ---" << std::endl;
	fofo.highFivesGuys(); // FragTrap function

	// Test copy constructor
	std::cout << "\n--- Testing copy constructor ---" << std::endl;
	FragTrap fofoCopy(fofo);

	// Test assignment operator
	std::cout << "\n--- Testing assignment operator ---" << std::endl;
	FragTrap anotherFofo;
	anotherFofo = fofo;

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
