/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:33:53 by eahn              #+#    #+#             */
/*   Updated: 2024/11/19 01:00:26 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main()
{
	ClapTrap clap1("Lulu");
	ClapTrap clap2("Mimi");

	// initial stattes
	std::cout << "\n--- Initial States ---" << std::endl;
	clap1.attack("Mimi");
	clap2.takeDamage(5);

	// repair test
	std::cout << "\n--- Repair Test ---" << std::endl;
	clap1.beRepaired(3);

	// energy depletion test
	std::cout << "\n--- Energy Depletion Test ---" << std::endl;
	for (int i = 0; i < 11 ; i++)
		clap1.attack("Mimi");

	// hit points depletion test
	std::cout << "\n--- Hit Points Depletion Test ---" << std::endl;
	clap2.takeDamage(50); // deplete hit points of clap2
	clap2.beRepaired(10); // try to repair after hit points are depleted

	// copy constructor test
	std::cout << "\n--- Copy Constructor Test ---" << std::endl;
	ClapTrap clap3(clap1);
	clap3.attack("Mimi");

	// assignment operator test
	std::cout << "\n--- Assignment Operator Test ---" << std::endl;
	ClapTrap clap4;
	clap4 = clap2;
	clap4.attack("Lulu");

	return 0;
}

/**
 * 
[Destructor] ClapTrap Mimi has been destroyed.  // clap4
[Destructor] ClapTrap Lulu has been destroyed.  // clap3
[Destructor] ClapTrap Mimi has been destroyed.  // clap2
[Destructor] ClapTrap Lulu has been destroyed.  // clap1
 */
