/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:35:48 by eahn              #+#    #+#             */
/*   Updated: 2024/11/22 22:38:29 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "[Cat] Default Constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "[Cat] Copy Constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	std::cout << "[Cat] Assignment Operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout <<"[Cat] Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Yaong! Yaong!" << std::endl;
}
