/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:23:39 by eahn              #+#    #+#             */
/*   Updated: 2024/11/24 19:47:00 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Default Constructor called" << std::endl;
	std::fill(std::begin(ideas), std::end(ideas), "Empty"); // from C++11, init array with "Empty"
	// cpp++98:
	//for (int i = 0; i < 100; ++i) {
   //ideas[i] = "Empty";
	//}
}

Brain::Brain(const Brain& other)
{
	std::cout << "[Brain] Copy Constructor called" << std::endl;
	std::copy(std::begin(other.ideas), std::end(other.ideas), std::begin(ideas)); // form C++11, copy array
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		std::cout << "[Brain] Assignment Operator called" << std::endl;
		std::copy(std::begin(other.ideas), std::end(other.ideas), std::begin(ideas));
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor called" << std::endl;
}

void Brain::setIdea(int idx, const std::string& idea)
{
	if (idx >= 0 && idx < 100)
		ideas[idx] = idea;
	else
		std::cout << "Invalid index" << std::endl;
}

std::string Brain::getIdea(int idx) const
{
	if (idx >= 0 && idx < 100)
		return ideas[idx];
	else
	{
		std::cout << "Invalid index" << std::endl;
		return "Empty";
	}
}
