/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:46:10 by eahn              #+#    #+#             */
/*   Updated: 2024/09/19 16:26:04 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	oldestIndex = 0;
	contactCount = 0;
}

void PhoneBook::addContact()
{
	if (contactCount < 8)
	{
		contacts[contactCount].setContact();
		contactCount++;
	}
	else
	{
		contacts[oldestIndex].setContact();
		oldestIndex = (oldestIndex + 1) % 8;
	}
}

void PhoneBook::searchContacts()
{
	int	index;

	if (contactCount == 0)
	{
		std::cout << "No contacts available." << std::endl;
		return ;
	}
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < contactCount; i++)
		contacts[i].displaySummary(i);
	std::cout << "Enter the index of the contact to display: ";
	std::cin >> index;
	if (std::cin.fail() || index < 0 || index >= contactCount)
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Invalid index. " << std::endl;
		return ;
	}
	contacts[index].displayDetails();
	std::cin.ignore(10000, '\n');
}
