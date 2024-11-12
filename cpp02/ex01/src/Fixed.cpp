/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:39:38 by eahn              #+#    #+#             */
/*   Updated: 2024/11/12 23:58:05 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// convert int to fixed point
Fixed::Fixed(const int intValue)
{
	std::cout << "Int constructor called" << std::endl;
	value = intValue << fractionalBits;
}
// example: 5 << 8 = 1280
// The value 1280 is translated to 5.0 in fixed point

// convert float to fixed point
Fixed::Fixed(const float floatValue)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(floatValue * (1 << fractionalBits));
}
// example: 5.25 * 256 = 1344
// Using roundf rounds the decimal ppint to reduce error

Fixed::Fixed(const Fixed &other) : value(other.value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		value = other.value;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}

// convert fixed point to int
int Fixed::toInt(void) const
{
	return (value >> fractionalBits);
}
// example: if value is 2560, 2560 >> 8
// 0000101000000000 >> 8 = 00001010 = 10

// convert fixed point to float
float Fixed::toFloat(void) const
{
	return ((float)value / (1 << fractionalBits));
}
// 1 << fractionalBits is equivalent to 2^fractionalBits (2^8 = 256)
// example: if value is 1280, 1280 / 256 = 5.0

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}
