/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:35:23 by eahn              #+#    #+#             */
/*   Updated: 2024/11/24 22:52:04 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character() : name("Default")
{
	for (int i = 0; i < 4; ++i) inventory[i] = nullptr;
	for (int i = 0; i < 10; ++i) dropped[i] = nullptr;
}

Character::Character(std::string const & name) : name(name)
{
	for (int i = 0; i < 4; ++i) inventory[i] = nullptr;
	for (int i = 0; i < 10; ++i) dropped[i] = nullptr;
}

Character::Character(const Character& other) : name(other.name)
{
	for (int i = 0; i < 4; ++i)
	{
		if (other.inventory[i])
			inventory[i] = other.inventory[i]->clone(); // Deep copy
		else
			inventory[i] = nullptr;
	}
	for (int i = 0; i < 10; ++i)
		dropped[i] = nullptr; // dropped materia is not copied
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		name = other.name;
		for (int i = 0; i < 4; ++i)
		{
			delete inventory[i]; // Delete existing inventory
			if (other.inventory[i])
				inventory[i] = other.inventory[i]->clone(); // Deep copy
			else
				inventory[i] = nullptr;
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		delete inventory[i];
}

std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	if (!m) return; // If m is nullptr, return
	for (int i = 0; i < 4; ++i)
	{
		if (!inventory[i]) // equip m to the first empty slot
		{
			inventory[i] = m; 
			return;
		}
	}
	std::cout << name << "'s inventory is full!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !inventory[idx]) return; // If idx is out of range or inventory[idx] is nullptr, return
	for (int i = 0; i < 10; ++i)
	{
		if (!dropped[i])
		{
			dropped[i] = inventory[idx];
			inventory[idx] = nullptr;
			return;
		}
	}
	std::cout << "Dropped list is full, cannot unequip!" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !inventory[idx]) return; // If idx is out of range or inventory[idx] is nullptr, return
	inventory[idx]->use(target);
}
