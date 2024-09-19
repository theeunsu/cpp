/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:46:16 by eahn              #+#    #+#             */
/*   Updated: 2024/09/19 17:36:20 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// &: a reference, like a pointer but refer to the original object
std::string getValidatedInput(const std::string &prompt)
{
	std::string input;
	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (!input.empty())
			return (input);
		std::cout << "Input cannot be empty. Please try again." << std::endl;
	}
}

// for (char c : input): available in C++11
// for C++98: for(size_t i = 0; i < input.length(); i++)
//     {if (!isdigit(input[i])) ...}
std::string getValidatedPhoneNumber(const std::string &prompt)
{
	bool	isValid;

	std::string input;
	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		isValid = true;
		for (char c : input)
		{
			if (!isdigit(c))
			{
				isValid = false;
				break ;
			}
		}
		if (isValid && !input.empty())
			return (input);
		else
			std::cout << "Invalid phone number. Please try again." << std::endl;
	}
}

void Contact::setContact()
{
	firstName = getValidatedInput("Enter the first name: ");
	lastName = getValidatedInput("Enter the last name: ");
	nickname = getValidatedInput("Enter the nickname: ");
	phoneNumber = getValidatedPhoneNumber("Enter the phone number (digits only): ");
	darkestSecret = getValidatedInput("Enter the darkest secret: ");
}

void Contact::displaySummary(int index)
{
	std::string first = firstName.length() > 10 ? firstName.substr(0, 9)
		+ "." : firstName;
	std::string last = lastName.length() > 10 ? lastName.substr(0, 9)
		+ "." : lastName;
	std::string nick = nickname.length() > 10 ? nickname.substr(0, 9)
		+ "." : nickname;
	std::cout << "|" << std::setw(10) << index << "|" << std::setw(10) << first << "|" << std::setw(10) << last << "|" << std::setw(10) << nick << "|" << std::endl;
}

void Contact::displayDetails()
{
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
