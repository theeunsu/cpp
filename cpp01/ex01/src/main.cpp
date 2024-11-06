/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:02:05 by eahn              #+#    #+#             */
/*   Updated: 2024/11/06 13:09:21 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main()
{
    int N = 5;
    Zombie *horde = zombieHorde(N, "hordeZombie");

    if (horde != nullptr)
    {
        for (int i = 0; i < N; i++)
            horde[i].announce();
        delete[] horde;
    }
    return 0;
}