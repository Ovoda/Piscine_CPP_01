/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:02:18 by calide-n          #+#    #+#             */
/*   Updated: 2021/06/26 14:25:35 by calide-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA() {

}

void    HumanA::attack(void) const {
    std::cout
        << _name
        << " attacks with his " 
        << _weapon.getType()
    << std::endl;
}