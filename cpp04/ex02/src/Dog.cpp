/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:12:41 by eahn              #+#    #+#             */
/*   Updated: 2024/11/24 20:53:58 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// brain(new Brain()): dynamically allocate Brain object
// and initialize it in the initializer list as private member (pointer)
Dog::Dog() : Animal(), brain(new Brain())
{
	type = "Dog";
	std::cout << "[Dog] Default Constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "[Dog] Copy Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain; // deep copy of Brain object
		std::cout << "[Dog] Assignment Operator called" << std::endl;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout <<"[Dog] Destructor called" << std::endl;
	delete brain; // delete dynamically allocated Brain object
}

void Dog::makeSound() const
{
	std::cout << "Mung! Mung!" << std::endl;
}

void Dog::setIdea(int idx, const std::string& idea)
{
	brain->setIdea(idx, idea);
}

std::string Dog::getIdea(int idx) const
{
	return brain->getIdea(idx);
}
