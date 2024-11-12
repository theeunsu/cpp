/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:39:44 by eahn              #+#    #+#             */
/*   Updated: 2024/11/12 17:35:00 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

void Harl::debug()
{
	std::cout << "[Debug]\nI love having extra sauce for my burger. I really do!\n" << std::endl;
}

void Harl::info()
{
	std::cout << "[Info]\nI cannot believe adding extra sauce costs more money.\n" << std::endl;
}

void Harl::warning()
{
	std::cout << "[Warning]\nI think I deserve to have some extra sauce for free.\n" << std::endl;
}

void Harl::error()
{
	std::cout << "[Error]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(const std::string &level)
{
	int	index;

	const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	index = -1;
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			index = i;
			break ;
		}
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
