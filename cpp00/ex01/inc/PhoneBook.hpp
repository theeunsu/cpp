/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:13:43 by eahn              #+#    #+#             */
/*   Updated: 2024/09/19 18:58:07 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>  // std::setw
# include <iostream> // std::cout, std::cin
# include <string>   // std::string

class PhoneBook
{
  private:
	Contact contacts[8];
	int contactCount;
	int oldestIndex;

  public:
	PhoneBook();
	void addContact();
	void searchContacts();
};

#endif
