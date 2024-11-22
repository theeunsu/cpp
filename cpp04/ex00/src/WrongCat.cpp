/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:35:48 by eahn              #+#    #+#             */
/*   Updated: 2024/11/22 22:38:29 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "[WrongCat] Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "[WrongCat] Copy Constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	std::cout << "[WrongCat] Assignment Operator called" << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout <<"[WrongCat] Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Yaong! Wrong Yaong!" << std::endl;
}
