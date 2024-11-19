/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:33:53 by eahn              #+#    #+#             */
/*   Updated: 2024/11/19 22:42:58 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main()
{
	// Create ScavTrap object
	std::cout << "--- Creating ScavTrap Coco ---" << std::endl;
	ScavTrap coco("Coco");

	// Test attack function
	std::cout << "\n--- Testing attack ---" << std::endl;
	coco.attack("Enemy");

	// Test guardGate function
	std::cout << "\n--- Testing guardGate ---" << std::endl;
	coco.guardGate();

	// Test copy constructor
	std::cout << "\n--- Testing copy constructor ---" << std::endl;
	ScavTrap cocoCopy(coco);

	// Test assignment operator
	std::cout << "\n--- Testing assignment operator ---" << std::endl;
	ScavTrap anotherScav;
	anotherScav = coco;

	// Test attack with no energy
	// std::cout << "\n--- Testing attack with no energy ---" << std::endl;
	// for (int i = 0; i < 51; i++)
	// 	coco.attack("Enemy"); // drain all energy points

	// Test destruction
	std::cout << "\n--- Destructors ---" << std::endl;

	return 0;
}
