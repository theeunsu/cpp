/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:35:48 by eahn              #+#    #+#             */
/*   Updated: 2024/11/24 20:03:01 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())
{
	type = "Cat";
	std::cout << "[Cat] Default Constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "[Cat] Copy Constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain; // deep copy of Brain object
		std::cout << "[Cat] Assignment Operator called" << std::endl;
	}
	return *this;
}

Cat::~Cat()
{
	delete brain; // delete dynamically allocated Brain object
	std::cout <<"[Cat] Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Yaong! Yaong!" << std::endl;
}

void Cat::setIdea(int idx, const std::string& idea)
{
	brain->setIdea(idx, idea);
}

std::string Cat::getIdea(int idx) const
{
	return brain->getIdea(idx);
}
