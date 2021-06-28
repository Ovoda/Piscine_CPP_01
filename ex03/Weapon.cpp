/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 13:58:19 by calide-n          #+#    #+#             */
/*   Updated: 2021/06/26 14:21:15 by calide-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::Weapon(void) {}

Weapon::~Weapon() {}

std::string Weapon::getType(void) const {
    return (_type);
}

void    Weapon::setType(std::string const type) {
    _type = type;
}