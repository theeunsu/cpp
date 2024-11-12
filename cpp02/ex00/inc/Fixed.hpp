/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:39:36 by eahn              #+#    #+#             */
/*   Updated: 2024/11/12 23:04:44 by eahn             ###   ########.fr       */
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
	Fixed(const Fixed &other);            // copy constructor
	Fixed &operator=(const Fixed &other); // copy assignment operator
	~Fixed();                             // destructor

	int getRawBits(void) const;     // returns the current raw value
	void setRawBits(int const raw); // sets the raw value
};

#endif
