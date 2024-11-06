/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:05:13 by eahn              #+#    #+#             */
/*   Updated: 2024/11/06 12:41:20 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int	main(void)
{
	Zombie *zombieHeap = newZombie("heapZombie");
    zombieHeap->announce();
    delete zombieHeap;

    randomChump("stackZombie");

    return 0;
}