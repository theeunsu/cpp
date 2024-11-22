/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:12:41 by eahn              #+#    #+#             */
/*   Updated: 2024/11/22 22:32:42 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// :Animal() calls Animal default constructor to initialize type
// If not, parent default constructor is called automatically anyway
Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "[Dog] Default Constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "[Dog] Copy Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	std::cout << "[Dog] Assignment Operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout <<"[Dog] Destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Mung! Mung!" << std::endl;
}
