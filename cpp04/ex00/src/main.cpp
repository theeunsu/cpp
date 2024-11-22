/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:39:06 by eahn              #+#    #+#             */
/*   Updated: 2024/11/22 23:14:05 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"


int main()
{
	{
		// Animal* type pointer
		const Animal* meta = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout << meta->getType() << " says: ";
		meta->makeSound();
		std::cout << dog->getType() << " says: ";
		dog->makeSound();
		std::cout << cat->getType() << " says: ";
		cat->makeSound();

		delete meta;
		delete dog;
		delete cat;
	}

	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();

		std::cout << meta->getType() << " says: ";
		meta->makeSound();
		std::cout << cat->getType() << " says: ";
		cat->makeSound();
		// since not virtual, base class' method (WrongAnimal) is called,
		// even though cat actually points at a WrongCat object 

		// //dynamic_cat allows to call makeSound() from WrongCat
		// const WrongCat* wrongCat = dynamic_cast<const WrongCat*>(cat);
		// if (wrongCat) 
    	// 	wrongCat->makeSound();  // WrongCat::makeSound() 호출
		// else 
    	// 	std::cout << "dynamic_cast failed: cat is not a WrongCat" << std::endl;

		delete meta;
		delete cat;
		
	}
	return 0;
}
