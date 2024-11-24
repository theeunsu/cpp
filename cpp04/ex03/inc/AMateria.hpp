/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:03:52 by eahn              #+#    #+#             */
/*   Updated: 2024/11/24 23:06:48 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& other);
		AMateria& operator=(const AMateria& other);
		virtual ~AMateria();

		// Interface
		std::string const & getType() const; // Returns the materia type
		
		virtual AMateria* clone() const = 0; // pure virtual function
		virtual void use(ICharacter& target);
};

#endif
