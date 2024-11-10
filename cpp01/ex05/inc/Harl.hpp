/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:31:09 by eahn              #+#    #+#             */
/*   Updated: 2024/11/10 22:00:31 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
  private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

  public:
	void complain(const std::string &level);
	// avoid unnecessary copy overhead & safe as read-only
	// constructor, destructor not needed
	// constructor shoud be defined when object initialization is needed
	// Harl class does not require any initialization or cleanup
};

#endif
