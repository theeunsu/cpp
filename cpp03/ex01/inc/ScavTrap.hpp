/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:58:56 by eahn              #+#    #+#             */
/*   Updated: 2024/11/19 17:41:21 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp" // Parent class

// Inheritance
// : public indicates ScavTrap inherits using public inheritance
// public inheritence: all public and protected members of ClapTrap remain public and protected in ScavTrap
class ScavTrap : public ClapTrap 
{
	public:
		ScavTrap(); // default constructor
		ScavTrap(const std::string& name); // parameterized constructor
		ScavTrap(const ScavTrap& other); // copy constructor
		ScavTrap& operator=(const ScavTrap& other); // assignment operator
		~ScavTrap(); // destructor
	
		void attack(const std::string& target) override; // overriding the attack function
		void guardGate(); // new function
};

//from C++11, override & virtual is used
//they define the function with exactly the same signature in the derived class
//it helps improve code readability and safety


#endif
