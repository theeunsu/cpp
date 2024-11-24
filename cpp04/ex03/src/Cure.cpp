/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:17:18 by eahn              #+#    #+#             */
/*   Updated: 2024/11/24 22:17:57 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& other) : AMateria(other) {}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
		AMateria::operator=(other);
	return *this;
}

Cure::~Cure() {}

// Overriden Methods
AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
