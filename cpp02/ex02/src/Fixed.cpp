/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:39:38 by eahn              #+#    #+#             */
/*   Updated: 2024/11/15 09:57:41 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed() : value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

// convert int to fixed point
Fixed::Fixed(const int intValue)
{
	// std::cout << "Int constructor called" << std::endl;
	value = intValue << fractionalBits;
}
// example: 5 << 8 = 1280
// The value 1280 is translated to 5.0 in fixed point

// convert float to fixed point
Fixed::Fixed(const float floatValue)
{
	// std::cout << "Float constructor called" << std::endl;
	value = roundf(floatValue * (1 << fractionalBits));
}
// example: 5.25 * 256 = 1344
// Using roundf rounds the decimal ppint to reduce error

Fixed::Fixed(const Fixed &other) : value(other.value)
{
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		value = other.value;
	}
	// std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}

int Fixed::toInt(void) const
{
	return (value >> fractionalBits);
}

float Fixed::toFloat(void) const
{
	return ((float)value / (1 << fractionalBits));
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

// comparison operators overloading (>, <, >=, <=, ==, !=)
bool Fixed::operator>(const Fixed &other) const
{
	return (this->value > other.value);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->value < other.value);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->value >= other.value);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->value <= other.value);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->value == other.value);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->value != other.value);
}

// arithmetic operators overloading (+, -, *, /)
Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;
	result.value = this->value + other.value;
	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;
	result.value = this->value - other.value;
	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;
	result.value = (this->value * other.value) >> fractionalBits;
	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	if (other.value == 0)
	{
		std::cerr << "Error: Division by zero" << std::endl;
		return (Fixed());
	}
	Fixed result;
	result.value = (this->value << fractionalBits) / other.value;
	return (result);
}

// Increment/decrement operators overloading (++, --) TBD
Fixed &Fixed::operator++()
{
	++value;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	++value;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	--value;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--value;
	return (tmp);
}


// min and max functions
Fixed &Fixed::min (Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::min (const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max (Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::max (const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}
