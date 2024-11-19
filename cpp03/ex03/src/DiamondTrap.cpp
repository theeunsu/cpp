/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:16:33 by eahn              #+#    #+#             */
/*   Updated: 2024/11/19 22:19:24 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

// default constructor
DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), name("default")
{
	ClapTrap::name = name + "_clap_name";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "[Default Constructor] DiamondTrap created with default values." << std::endl;
}

// parameterized constructor
DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), name(name)
{
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "[Constructor] DiamondTrap " << name << " has been created." << std::endl;
}

// copy constructor
DiamondTrap::DiamondTrap (const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name)
{
	std::cout << "[Copy Constructor] DiamondTrap " << other.name << " has been copied." << std::endl;
}

// assignment operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other); // copy ClapTrap members
		name = other.name; // unique member from DiamondTrap
		std::cout << "[Assignment Operator] DiamondTrap " << other.name << " assigned to another." << std::endl;
	}
	return *this; 
}

// destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "[Destructor] DiamondTrap " << name << " has been destroyed." << std::endl;
}

// new function
void DiamondTrap::whoAmI()
{
	std::cout << "[Action: Who Am I] DiamondTrap " << name << " has also a ClapTrap name: " << ClapTrap::name << "." << std::endl;
}
