/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:39:06 by eahn              #+#    #+#             */
/*   Updated: 2024/11/25 00:08:01 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{
	// const Animal* dog = new Dog();
	// const Animal* cat = new Cat();
	// // Construction: Parent Class(Animal) - Member Constructor(Brain) - Child Class Constructor(Dog)

	// std::cout << "\n--- Testing individual objects ---" << std::endl;

	// delete dog;
	// delete cat;
	// Destruction: Child Class Destructor(Dog) - Member Destructor(Brain) - Parent Class Destructor(Animal)

	// std::cout << "\n--- Creating Animal Array ---" << std::endl;
	// const int arraySize = 4;
	// Animal* animals[arraySize];

	// for (int i = 0; i < arraySize / 2; ++i)
	// {
	// 	animals[i] = new Dog();
	// }
	// for (int i = arraySize / 2; i < arraySize; ++i)
	// {
	// 	animals[i] = new Cat();
	// }

	// std::cout << "\n--- Deleting Animal Array ---" << std::endl;
	// for (int i = 0; i < arraySize; ++i)
	// {
	// 	delete animals[i];
	// }

	std::cout << "\n--- Deep Copy Test ---" << std::endl;
	Dog originalDog;
	originalDog.setIdea(0, "Original Dog's Idea");

	// copy using copy constructor
	Dog copiedDog(originalDog);
	copiedDog.setIdea(0, "Copied Dog's New Idea");

	// check independency of ideas from originalDog and copiedDog
	std::cout << "Original Dog's Idea[0]: " << originalDog.getIdea(0) << std::endl;
	std::cout << "Copied Dog's Idea[0]: " << copiedDog.getIdea(0) << std::endl;


	std::cout << "\n--- Assignment Operator Test ---" << std::endl;
	Cat originalCat;
	originalCat.setIdea(0, "Original Cat's Idea");
	
	Cat assignedCat;
	assignedCat = originalCat;
	assignedCat.setIdea(0, "Assigned Cat's New Idea");

	std::cout << "Original Cat's Idea[0]: " << originalCat.getIdea(0) << std::endl;
	std::cout << "Assigned Cat's Idea[0]: " << assignedCat.getIdea(0) << std::endl;

	// std::cout << "\n--- Deep Copy Test with basic ---" << std::endl;
	// Dog basic;
	// basic.setIdea(0, "Basic Dog's Idea");
	// {
	// 	Dog tmp = basic; // 복사 생성자 호출
	// 	tmp.setIdea(0, "Temporary Dog's Idea");
	// 	std::cout << "Inside Scope - Basic Dog's Idea[0]: " << basic.getIdea(0) << std::endl;
	// 	std::cout << "Inside Scope - Temporary Dog's Idea[0]: " << tmp.getIdea(0) << std::endl;
	// } // tmp 소멸 - Brain이 basic에 영향을 주지 않아야 함

	// std::cout << "Outside Scope - Basic Dog's Idea[0]: " << basic.getIdea(0) << std::endl;

	std::cout << "\n--- Program End ---" << std::endl;

	return 0;
}


// what is Deep Copy?
// allocates new memory and duplicates data
// objects are independent of each other
