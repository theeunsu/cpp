/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:35:18 by eahn              #+#    #+#             */
/*   Updated: 2024/11/06 15:51:19 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type) {}

const std::string &Weapon::getType() const
{
	return (type);
}

void Weapon::setType(const std::string &newType)
{
    type = newType;
}