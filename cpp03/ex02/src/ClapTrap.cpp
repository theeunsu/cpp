/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 23:21:20 by eahn              #+#    #+#             */
/*   Updated: 2024/11/19 16:38:01 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

// default constructor
ClapTrap::ClapTrap() : name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "[Default Constructor] ClapTrap created with default values." << std::endl;
}

// parameterized constructor
ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "[Constructor] ClapTrap " << name << " has been created." << std::endl;
}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
	std::cout << "[Copy Constructor] ClapTrap " << other.name << " has been copied." << std::endl;
}

// assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
		std::cout << "[Assignment Operator] ClapTrap " << other.name << " assigned to another." << std::endl;
	}
	return *this; 
}

// destructor
ClapTrap::~ClapTrap()
{
	std::cout << "[Destructor] ClapTrap " << name << " has been destroyed." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints == 0)
	{
		std::cout << "[Action: Attack] ClapTrap " << name << " cannot attack, no hit points left." << std::endl;
	}
	else if (energyPoints == 0)
	{
		std::cout << "[Action: Attack] ClapTrap " << name << " cannot attack, no energy points left." << std::endl;
	}
	else
	{	energyPoints--;
		std::cout << "[Action: Attack] ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "[Action: Take Damage] ClapTrap " << name << " cannot take damage, no hit points left." << std::endl;
	}
	else
	{
		hitPoints = (amount >= hitPoints) ? 0 : hitPoints - amount;
		std::cout << "[Action: Take Damage] ClapTrap " << name << " took " << amount << " damage. Current hit points: " << hitPoints << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "[Action: Repair] ClapTrap " << name << " cannot be repaired, no hit points left." << std::endl;
	}
	else if (energyPoints == 0)
	{
		std::cout << "[Action: Repair] ClapTrap " << name << " cannot be repaired, no energy points left." << std::endl;
	}
	else
	{	
		energyPoints--;
		hitPoints += amount;
		std::cout << "[Action: Repair] ClapTrap " << name << " repaired itself, gaining " << amount << " hit points. Current hit points: " << hitPoints << std::endl;
	}
}
