/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:04:55 by eahn              #+#    #+#             */
/*   Updated: 2024/11/11 14:46:03 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    private:
        std::string name; 
        Weapon &weapon; // weapon as reference

    public:
        HumanA(const std::string name, Weapon &weapon); // constructor, since weapon is a reference, it must be initialized in the constructor
        void attack() const;
};

#endif