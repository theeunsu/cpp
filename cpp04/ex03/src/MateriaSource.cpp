/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:52:33 by eahn              #+#    #+#             */
/*   Updated: 2024/11/24 22:55:45 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i) templates[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; ++i)
	{
		if (other.templates[i])
			templates[i] = other.templates[i]->clone(); // Deep copy
		else
			templates[i] = nullptr;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete templates[i]; // Delete existing templates
			if (other.templates[i])
				templates[i] = other.templates[i]->clone(); // Deep copy
			else
				templates[i] = nullptr;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i) delete templates[i];
}

// Interface Implementation
void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)	return ; // If m is nullptr, return
	for (int i = 0; i < 4; ++i)
	{
		if (!templates[i]) // If templates[i] is nullptr
		{
			templates[i] = m->clone(); // Copy Materia and store it in templates[i]
			return;
		}
	}
	std::cout << "MateriaSource is full, cannot learn more Materia!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (templates[i] && templates[i]->getType() == type)
			return templates[i]->clone(); // Return a copy of the Materia
	}
	std::cout << "Unknown Materia type: " << type << std::endl;
	return nullptr; // If no Materia is found, return nullptr
}
