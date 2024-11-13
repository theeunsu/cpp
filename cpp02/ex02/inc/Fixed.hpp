/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:39:36 by eahn              #+#    #+#             */
/*   Updated: 2024/11/13 16:40:42 by eahn             ###   ########.fr       */
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

	// overloading operators for comparison operations
	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;

	// overloading operators for arithmetic operations
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;

	
};


#endif
