/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:39:06 by eahn              #+#    #+#             */
/*   Updated: 2024/11/24 21:40:06 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{
	//Animal cannot be instantiated directly since it's abstract
	// Aminal* animal = new Animal(); // Error

	Animal* animals[4];

	//create 2 Dogs and 2 Cats
	for (int i = 0; i < 2; ++i)
		animals[i] = new Dog();
	for (int i = 2; i < 4; ++i)
		animals[i] = new Cat();

	// make each animal make a sound
	for (int i = 0; i < 4; ++i)
		animals[i]->makeSound();

	// clean up
	for (int i = 0; i < 4; ++i)
		delete animals[i];

	return 0;
}
