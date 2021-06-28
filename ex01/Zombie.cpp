/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 10:45:03 by calide-n          #+#    #+#             */
/*   Updated: 2021/06/26 11:34:47 by calide-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

// Constructors

Zombie::Zombie(void) {
    std::cout << "[Constructor] new zombie created successfully" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {
    std::cout << "[Constructor] new zombie created successfully" << std::endl;
}

// Destructor

Zombie::~Zombie(void) {
    std::cout << "[Destructor] zombie deleted successfully" << std::endl;
}

// Member Functions

void    Zombie::announce() const {
    std::cout
        << "[announce()] Hello, I'm "
        << _name
        << std::endl;
}

void    Zombie::setName(std::string name) {
    _name = name;
}