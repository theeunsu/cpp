/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:01:10 by eahn              #+#    #+#             */
/*   Updated: 2024/11/22 22:50:17 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() : type("Default")
{
	std::cout << "[Animal] Default Constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "[Animal] Copy Constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		type = other.type;
		std::cout << "[Animal] Assignment Operator called" << std::endl;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "Animal! Animal!" << std::endl;
}
