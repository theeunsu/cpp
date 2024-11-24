/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:28:52 by eahn              #+#    #+#             */
/*   Updated: 2024/11/24 22:33:11 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string name; // Character's name
		AMateria* inventory[4]; // Materia inventory (max 4)
		AMateria* dropped[10]; // manage dropped materia (max 10)

	public:
		Character();
		Character(std::string const & name);
		Character(const Character& other);
		Character& operator=(const Character& other);
		~Character();

		// Interface Implementation
		std::string const & getName() const override;
		void equip(AMateria* m) override;
		void unequip(int idx) override;
		void use(int idx, ICharacter& target) override;
};

#endif
