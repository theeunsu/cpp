/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 23:16:01 by eahn              #+#    #+#             */
/*   Updated: 2024/11/19 16:26:32 by eahn             ###   ########.fr       */
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
		~ClapTrap(); // destructor

		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		// unsigned int getEnergyPoints() const;
};

#endif
