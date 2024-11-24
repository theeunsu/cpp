/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:10:50 by eahn              #+#    #+#             */
/*   Updated: 2024/11/24 22:12:16 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria() : type("Unknown") {}

AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::AMateria(const AMateria& other) : type(other.type) {}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		type = other.type;
	return *this;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Using " << type << " Materia on " << target.getName() << std::endl;
}
