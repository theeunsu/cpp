/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:42:16 by eahn              #+#    #+#             */
/*   Updated: 2024/11/06 15:07:52 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string stringVar = "HI THIS IS BRAIN";

	std::string *stringPTR = &stringVar;
	std::string &stringREF = stringVar;

	std::cout << "Address of the stringVar: " << &stringVar << std::endl;
	std::cout << "Address of the stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of the stringREF: " << &stringREF << std::endl;

	std::cout << "Value of the stringVar: " << stringVar << std::endl;
	std::cout << "Value of the stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of the stringREF: " << stringREF << std::endl;

	return (0);
}