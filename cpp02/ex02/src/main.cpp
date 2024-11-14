/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:39:40 by eahn              #+#    #+#             */
/*   Updated: 2024/11/14 18:35:05 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

/**
실수 → 고정 소수점 변환: 실수 × (1 << fractionalBits)
고정 소수점 → 실수 변환: 고정 소수점 ÷ (1 << fractionalBits)
*/

// int	main(void)
// {

// 	// // comparison operators
// 	// std::cout << "a > b: " << (a > b) << std::endl;
// 	// std::cout << "a < b: " << (a < b) << std::endl;
// 	// std::cout << "a >= b: " << (a >= b) << std::endl;
// 	// std::cout << "a <= b: " << (a <= b) << std::endl;
// 	// std::cout << "a == b: " << (a == b) << std::endl;
// 	// std::cout << "a != b: " << (a != b) << std::endl;

// 	// // arithmetic operations
// 	// Fixed	c;
// 	// c = a + b;
// 	// std::cout << "a + b = " << c << std::endl;
// 	// c = a - b;
// 	// std::cout << "a - b = " << c << std::endl;
// 	// c = a * b;
// 	// std::cout << "a * b = " << c << std::endl;
// 	// c = a / b;
// 	// std::cout << "a / b = " << c << std::endl;

// 	// increment and decrement operations

// 	// Fixed d(1.5f);

// 	// std::cout << d++ << std::endl; // 출력: 1.5 (증가 전 값)
// 	// std::cout << d << std::endl;   // 출력: 1.50391 (증가 후 값)

// 	// std::cout << ++d << std::endl; // 출력: 1.50781 (증가 후 값)

// 	// std::cout << d-- << std::endl; // 출력: 1.50781 (감소 전 값)
// 	// std::cout << d << std::endl;   // 출력: 1.50391 (감소 후 값)

// 	// Min Max operations
// 	Fixed a(5.25f);
// 	Fixed b(10.5f);
// 	std::cout << "Min: " << Fixed::min(a, b) << std::endl; // 최소값 출력
//     std::cout << "Max: " << Fixed::max(a, b) << std::endl; // 최대값 출력

// 	const Fixed e(30.75f);
// 	const Fixed f(5.1f);

// 	std::cout << "Const Min: " << Fixed::min(e, f) << std::endl; // 상수 객체 최소값
//     std::cout << "Const Max: " << Fixed::max(e, f) << std::endl; // 상수 객체 최대값

// 	return (0);
// }


int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}
