/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:43 by eahn              #+#    #+#             */
/*   Updated: 2024/11/06 12:31:34 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream> // std::cout, std::endl
# include <string>   // std::string

class Zombie
{
  private:
	std::string name;

  public:
	Zombie(std::string name);
	~Zombie();
	void announce();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif