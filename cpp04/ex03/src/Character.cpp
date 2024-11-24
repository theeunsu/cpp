/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:35:23 by eahn              #+#    #+#             */
/*   Updated: 2024/11/24 23:37:10 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character() : name("Default")
{
	for (int i = 0; i < 4; ++i) inventory[i] = nullptr;
	for (int i = 0; i < 10; ++i) dropped[i] = nullptr;
	std::cout << "Character " << name << " has been created (default constructor)." << std::endl;
}

Character::Character(std::string const & name) : name(name)
{
	for (int i = 0; i < 4; ++i) inventory[i] = nullptr;
	for (int i = 0; i < 10; ++i) dropped[i] = nullptr;
	std::cout << "Character " << name << " has been created." << std::endl;
}

Character::Character(const Character& other) : name(other.name)
{
	std::cout << "Character " << name << ": Copy Constructor called." << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		if (other.inventory[i])
		{
			inventory[i] = other.inventory[i]->clone(); // Deep copy
			std::cout << "Copied materia of type " << inventory[i]->getType() << " to slot " << i << std::endl;
		}
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
		std::cout << "Character " << name << ": Assignment Operator called." << std::endl;
		name = other.name;
		for (int i = 0; i < 4; ++i)
		{
			delete inventory[i]; // Delete existing inventory
			if (other.inventory[i])
			{
				inventory[i] = other.inventory[i]->clone(); // Deep copy
				std::cout << "Assigned materia of type " << inventory[i]->getType() << " to slot " << i << std::endl;
			}
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
	if (!m) 
	{
		std::cout << name << ": Cannot equip a null Materia." << std::endl;
		return; // If m is nullptr, return
	}
	for (int i = 0; i < 4; ++i)
	{
		if (!inventory[i]) // equip m to the first empty slot
		{
			inventory[i] = m; 
			std::cout << name << ": Equipped " << m->getType() << " Materia at slot " << i << std::endl;
			return;
		}
	}
	std::cout << name << "'s inventory is full! Current equipped count: 4." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !inventory[idx]) 
	{
		std::cout << name << ": Cannot unequip at index " << idx << " (invalid or empty slot)." << std::endl;
		return; // If idx is out of range or inventory[idx] is nullptr, return
	}
	std::cout << name << ": Unequipped " << inventory[idx]->getType() << " Materia at slot " << idx << std::endl;
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
	if (idx < 0 || idx >= 4 || !inventory[idx])
	{
		std::cout << name << ": Cannot use Materia at index " << idx << " (invalid or empty slot)." << std::endl;
		return; // If idx is out of range or inventory[idx] is nullptr, return
	}
	std::cout << name << " uses " << inventory[idx]->getType() << " from slot " << idx << std::endl;
	inventory[idx]->use(target);
}
