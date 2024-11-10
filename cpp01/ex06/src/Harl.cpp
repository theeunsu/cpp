/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:39:44 by eahn              #+#    #+#             */
/*   Updated: 2024/11/10 23:37:40 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

void Harl::debug()
{
	std::cout << "[Debug]\nI love having extra sauce for my burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "[Info]\nI cannot believe adding extra sauce costs more money." << std::endl;
}

void Harl::warning()
{
	std::cout << "[Warning]\nI think I deserve to have some extra sauce for free." << std::endl;
}

void Harl::error()
{
	std::cout << "[Error]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

// complain function using pointer to member function
void Harl::complain(const std::string &level)
{
	int	index;

	if (level == "DEBUG")
		index = 0;
	else if (level == "INFO")
		index = 1;
	else if (level == "WARNING")
		index = 2;
	else if (level == "ERROR")
		index = 3;
	else
	{
		std::cout << "[ Invalid level ]" << std::endl;
		return ;
	}
	switch (index)
	{
	case 0:
		debug();
	case 1:
		info();
	case 2:
		warning();
	case 3:
		error();
		break ;
	default:
		std::cout << "[ Invalid level ]" << std::endl;
		break ;
	}
}
