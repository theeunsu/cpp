/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:12:58 by eahn              #+#    #+#             */
/*   Updated: 2024/11/06 15:53:35 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;

    public:
        Weapon(const std::string& type);
        const std::string& getType() const; // 함수 내부에서 멤버 변수를 수정하지 않겠다는 약속
        void setType(const std::string& newType);
};


#endif