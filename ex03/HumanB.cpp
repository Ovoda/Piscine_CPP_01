/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:02:18 by calide-n          #+#    #+#             */
/*   Updated: 2021/06/26 14:56:44 by calide-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    _weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::attack(void) const
{
    if (!_weapon)
        std::cout << "I do not have a weapon yet" << std::endl;
    else
    {
        std::cout
            << _name
            << " attacks with his "
            << _weapon->getType()
        << std::endl;
    }
}

void HumanB::setWeapon(Weapon & weapon)
{
    _weapon = &weapon;
}