/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:20:47 by eahn              #+#    #+#             */
/*   Updated: 2024/11/24 23:22:45 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Character.hpp"
#include "../inc/MateriaSource.hpp"


// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	ICharacter* me = new Character("me");

// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter* bob = new Character("bob");

// 	me->use(0, *bob); // use ice on bob
// 	me->use(1, *bob); // use cure on bob

// 	delete bob;
// 	delete me;
// 	delete src;

// 	return 0;

// }


// more tests
int main()
{
	std::cout << "--- Creating MateriaSource ---" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice()); // Duplicate Ice materia
	src->learnMateria(new Cure()); // Duplicate Cure materia
	src->learnMateria(new Ice()); // Exceeds the limit of learned materia

	std::cout << "\n--- Creating Character ---" << std::endl;
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	std::cout << "\n--- Equipping Materia ---" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice"); // Exceeds inventory capacity
	me->equip(tmp);

	std::cout << "\n--- Using Materia ---" << std::endl;
	me->use(0, *bob); // use ice on bob
	me->use(1, *bob); // use cure on bob
	me->use(2, *bob); // use cure on bob
	me->use(3, *bob); // use ice on bob
	me->use(4, *bob); // out of range

	std::cout << "\n--- Unequipping Materia ---" << std::endl;
	me->unequip(1); // unequip cure
	me->use(1, *bob); // Invalid index after unequipping

	std::cout << "\n--- Deep Copy Test ---" << std::endl;
	Character copyOfMe(*dynamic_cast<Character*>(me)); // Copy using copy constructor
	copyOfMe.use(0, *bob); // use ice on bob (copied materia)
	copyOfMe.use(3, *bob); // use ice on bob (copied materia)

	std::cout << "\n--- Assignment Operator Test ---" << std::endl;
	Character another("another");
	another = *dynamic_cast<Character*>(me); // Copy using assignment operator
	another.use(0, *bob); // use ice on bob
	another.use(3, *bob); // use ice on bob

	std::cout << "\n--- Deleting Characters and MateriaSource ---" << std::endl;
	delete bob;
	delete me;
	delete src;

	return 0;
}
