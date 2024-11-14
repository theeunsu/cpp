/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:39:40 by eahn              #+#    #+#             */
/*   Updated: 2024/11/14 18:11:18 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int	main(void)
{
	// Fixed	c;

	// Fixed a(5.25f);
	// Fixed b(10.5f);
	// // comparison operators
	// std::cout << "a > b: " << (a > b) << std::endl;
	// std::cout << "a < b: " << (a < b) << std::endl;
	// std::cout << "a >= b: " << (a >= b) << std::endl;
	// std::cout << "a <= b: " << (a <= b) << std::endl;
	// std::cout << "a == b: " << (a == b) << std::endl;
	// std::cout << "a != b: " << (a != b) << std::endl;

	// // arithmetic operations
	// c = a + b;
	// std::cout << "a + b = " << c << std::endl;
	// c = a - b;
	// std::cout << "a - b = " << c << std::endl;
	// c = a * b;
	// std::cout << "a * b = " << c << std::endl;
	// c = a / b;
	// std::cout << "a / b = " << c << std::endl;

	// increment and decrement operations
	Fixed d(1.5f);

	std::cout << d++ << std::endl; // 출력: 1.5 (증가 전 값)
	std::cout << d << std::endl;   // 출력: 1.50390625 (증가 후 값)

	std::cout << ++d << std::endl; // 출력: 1.5078125 (증가 후 값)

	std::cout << d-- << std::endl; // 출력: 1.5078125 (감소 전 값)
	std::cout << d << std::endl;   // 출력: 1.50390625 (감소 후 값)
	return (0);
}

/**
실수 → 고정 소수점 변환: 실수 × (1 << fractionalBits)
고정 소수점 → 실수 변환: 고정 소수점 ÷ (1 << fractionalBits)
*/
