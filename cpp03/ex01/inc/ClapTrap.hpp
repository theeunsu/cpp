/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 23:16:01 by eahn              #+#    #+#             */
/*   Updated: 2024/11/20 12:56:51 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap 
{
	// private:
	protected:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;
		
	public: 
		//Orthodox Canonical Form
		ClapTrap(); // default constructor
		ClapTrap(const std::string& name); // parameterized constructor
		ClapTrap(const ClapTrap& other); // copy constructor
		ClapTrap& operator=(const ClapTrap& other); // assignment operator
		virtual ~ClapTrap(); // destructor but virtual so that the derived class destructor is called first (safer) 

		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif


// example when using virtual destructor
// ClapTrap* obj = new ScavTrap("Hero");
// delete obj; 
// when delete obj called, it identifies the actual type of obj being pointed to (ScavTrap)
// and calls destructor of ScavTrap first, and then calls destructor of ClapTrap