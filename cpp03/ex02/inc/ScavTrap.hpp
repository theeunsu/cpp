/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:58:56 by eahn              #+#    #+#             */
/*   Updated: 2024/11/20 12:42:27 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp" // Parent class

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

#endif
