/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:39:44 by eahn              #+#    #+#             */
/*   Updated: 2024/11/10 22:08:00 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

void Harl::debug()
{
	std::cout << "Debug:I love having extra sauce for my burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "Info: I cannot believe adding extra sauce costs more money." << std::endl;
}

void Harl::warning()
{
	std::cout << "Warning: I think I deserve to have some extra sauce for free." << std::endl;
}

void Harl::error()
{
	std::cout << "Error: This is unacceptable! I want to speak to the manager now." << std::endl;
}

// complain function using pointer to member function
void Harl::complain(const std::string &level)
{
	void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning,
		&Harl::error};
	const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])(); // call concerned member function
			return ;
		}
	}
	std::cout << "Invalid level: " << level << std::endl;
}
