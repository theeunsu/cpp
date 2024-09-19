/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:13:43 by eahn              #+#    #+#             */
/*   Updated: 2024/09/19 16:11:22 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream> // std::cout, std::cin
# include <string>   // std::string

class PhoneBook
{
  private:
	Contact contacts[8];
	int contactCount;
	int oldestIndex;

  public:
	PhoneBook(); // 생성자 - 멤버 변수 초기화
	void addContact();
	void searchContacts();
};

#endif
