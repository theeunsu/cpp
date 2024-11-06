/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:44:44 by eahn              #+#    #+#             */
/*   Updated: 2024/11/06 13:03:34 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(); // Basic constructor
        Zombie(std::string name);
        ~Zombie();
        void announce();
        void setName(std::string name);      
};

Zombie* zombieHorde (int N, std::string name);

#endif