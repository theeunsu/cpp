/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:06:23 by eahn              #+#    #+#             */
/*   Updated: 2024/11/19 22:11:06 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// Multiple Inheritance
class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
	
	public:
		DiamondTrap(); // default constructor
		DiamondTrap(const std::string& name); // parameterized constructor
		DiamondTrap(const DiamondTrap& other); // copy constructor
		DiamondTrap& operator=(const DiamondTrap& other); // assignment operator
		~DiamondTrap(); // destructor

		void whoAmI();
};

#endif
