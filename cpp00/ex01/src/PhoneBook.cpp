/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:46:10 by eahn              #+#    #+#             */
/*   Updated: 2024/09/18 17:19:05 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::setContact()
{
    std::cout << "Enter the first name: ";
    std::getline(std::cin, firstName);
    std::cout << "Enter the last name: ";
    std::getline(std::cin, lastName);
    std::cout << "Enter the nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Enter the phone number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Enter the darkest secret: ";
    std::getline(std::cin, darkestSecret);
}

void Contact::displaySummary(int index)
{
    std::string first = firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName;
    std::string last = lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName;
    std::string nick = nickname.length() > 10 ? nickname.substr(0, 9)  + "." : nickname;
    
    std::cout << std::setw(10) << index << " | "
            << std::setw(10) << first << " | "
            << std::setw(10) << last << " | "
            << std::setw(10) << nick << std::endl;
}

void Contact::displayDetails()
{
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}