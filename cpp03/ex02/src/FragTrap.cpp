/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:32:42 by eahn              #+#    #+#             */
/*   Updated: 2024/11/19 20:39:14 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	hitPoints = 100; // ClapTrap: 10
	energyPoints = 100; // ClapTrap: 10
	attackDamage = 30; // ClapTrap: 0
	std::cout << "[Default Constructor] FragTrap created with default values." << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	hitPoints = 100; // ClapTrap: 10
	energyPoints = 100; // ClapTrap: 10
	attackDamage = 30; // ClapTrap: 0
	std::cout << "[Constructor] FragTrap " << name << " has been created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "[Copy Constructor] FragTrap " << other.name << " has been copied." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		std::cout << "[Assignment Operator] FragTrap " << other.name << " assigned to another." << std::endl;
	}
	return *this; 
}

FragTrap::~FragTrap()
{
	std::cout << "[Destructor] FragTrap " << name << " has been destroyed." << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "[Action: High Five] FragTrap " << name << " high fives guys." << std::endl;
}
