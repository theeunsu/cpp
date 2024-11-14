/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:39:36 by eahn              #+#    #+#             */
/*   Updated: 2024/11/14 18:18:01 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
  private:
	int value; // fixed point value
	static const int fractionalBits = 8;

  public:
	Fixed();                              // default constructor
	Fixed(const int intValue);            // constructor with int
	Fixed(const float floatValue);        // constructor with float
	Fixed(const Fixed &other);            // copy constructor
	Fixed &operator=(const Fixed &other); // copy assignment operator
	~Fixed();                             // destructor

	int getRawBits(void) const;     // returns the current raw value
	void setRawBits(int const raw); // sets the raw value

	float toFloat(void) const; // convert fixed point to float
	int toInt(void) const;     // convert fixed point to int

	// overload for comparison operations
	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;

	// overload for arithmetic operations
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;

	// overload for increment and decrement operations
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	// overload for min and max functions
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);

	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
