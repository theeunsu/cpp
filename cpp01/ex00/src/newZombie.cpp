/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:03:10 by eahn              #+#    #+#             */
/*   Updated: 2024/11/06 12:24:23 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

// Create a new Zombie on the heap and return it

Zombie	*newZombie(std::string name)
{
    return new Zombie(name);
}

// new: allocate memory on the heap
// delete: deallocate memory on the heap