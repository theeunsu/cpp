/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:16:16 by eahn              #+#    #+#             */
/*   Updated: 2024/11/19 17:21:12 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	hitPoints = 100; // ClapTrap: 10
	energyPoints = 50; // ClapTrap: 10
	attackDamage = 20; // ClapTrap: 0
	std::cout << "[Default Constructor] ScavTrap created with default values." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	hitPoints = 100; // ClapTrap: 10
	energyPoints = 50; // ClapTrap: 10
	attackDamage = 20; // ClapTrap: 0
	std::cout << "[Constructor] ScavTrap " << name << " has been created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "[Copy Constructor] ScavTrap " << other.name << " has been copied." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		std::cout << "[Assignment Operator] ScavTrap " << other.name << " assigned to another." << std::endl;
	}
	return *this; 
}

ScavTrap::~ScavTrap()
{
	std::cout << "[Destructor] ScavTrap " << name << " has been destroyed." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (hitPoints == 0)
	{
		std::cout << "[Action: Attack] ScavTrap " << name << " cannot attack, no hit points left." << std::endl;
	}
	else if (energyPoints == 0)
	{
		std::cout << "[Action: Attack] ScavTrap " << name << " cannot attack, no energy points left." << std::endl;
	}
	else
	{	energyPoints--;
		std::cout << "[Action: Attack] ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "[Action: Guard Gate] ScavTrap " << name << " has entered in Gate keeper mode." << std::endl;
}
