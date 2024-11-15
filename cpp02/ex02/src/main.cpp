/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:39:40 by eahn              #+#    #+#             */
/*   Updated: 2024/11/15 10:04:45 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

/**
실수 → 고정 소수점 변환: 실수 × (1 << fractionalBits)
고정 소수점 → 실수 변환: 고정 소수점 ÷ (1 << fractionalBits)
*/

// #include <iomanip> // std::setprecision
// int main() {
//     // Default constructor test
//     Fixed a;
//     std::cout << "Default constructor test: " << a << std::endl;

//     // Int constructor test
//     Fixed b(10);
//     std::cout << "Int constructor test: " << b << std::endl;

//     // Float constructor test
//     Fixed c(42.42f);
//     std::cout << "Float constructor test: " << c << std::endl;

//     // Copy constructor test
//     Fixed d(b);
//     std::cout << "Copy constructor test: " << d << std::endl;

//     // Copy assignment operator test
//     a = Fixed(1234.0f);
//     std::cout << "Copy assignment operator test: " << a << std::endl;

//     // Comparison operators test
//     Fixed e(10.5f);
//     Fixed f(5.25f);
//     std::cout << "Comparison operators test:" << std::endl;
//     std::cout << "e > f: " << (e > f) << std::endl;
//     std::cout << "e < f: " << (e < f) << std::endl;
//     std::cout << "e >= f: " << (e >= f) << std::endl;
//     std::cout << "e <= f: " << (e <= f) << std::endl;
//     std::cout << "e == f: " << (e == f) << std::endl;
//     std::cout << "e != f: " << (e != f) << std::endl;

//     // Arithmetic operators test
//     Fixed g = e + f;
//     Fixed h = e - f;
//     Fixed i = e * f;
//     Fixed j = e / f;
//     std::cout << "Arithmetic operators test:" << std::endl;
//     std::cout << "e + f: " << g << std::endl;
// 	std::cout << "e - f: " << h << std::endl;
//     std::cout << "e * f: " << i << std::endl;
//     if (f != Fixed(0)) { // Check for division by zero
//         std::cout << "e / f: " << j << std::endl;
//     } else {
//         std::cout << "e / f: Division by zero error" << std::endl;
//     }

//     // Increment and decrement operators test
//     std::cout << "Increment and decrement operators test:" << std::endl;
// 	std::cout << std::fixed << std::setprecision(8); // 소수점 이하 8자리까지 출력
//     std::cout << "Initial a: " << a << std::endl;

//     std::cout << "After ++a: " << ++a << std::endl; // 전위 증가
//     std::cout << "After a++: " << a++ << std::endl; // 후위 증가
//     std::cout << "a after a++: " << a << std::endl;

//     std::cout << "After --a: " << --a << std::endl; // 전위 감소
//     std::cout << "After a--: " << a-- << std::endl; // 후위 감소
//     std::cout << "a after a--: " << a << std::endl;

//     std::cout << "Raw value: " << a.getRawBits() << std::endl; // Raw Value 출력

//     // Min and max functions test
//     Fixed const x(5.05f);
//     Fixed const y(2.02f);
//     std::cout << "Min and max functions test:" << std::endl;
//     std::cout << "Min of x and y: " << Fixed::min(x, y) << std::endl;
//     std::cout << "Max of x and y: " << Fixed::max(x, y) << std::endl;

//     Fixed z(3.33f);
//     std::cout << "Min of e and z: " << Fixed::min(e, z) << std::endl;
//     std::cout << "Max of e and z: " << Fixed::max(e, z) << std::endl;

//     return 0;
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
