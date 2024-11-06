/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:05:16 by eahn              #+#    #+#             */
/*   Updated: 2024/11/06 12:26:00 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

// Create a new Zombie on the stack and announce it

void	randomChump(std::string name)
{
	Zombie tempZombie(name);
	tempZombie.announce();
}