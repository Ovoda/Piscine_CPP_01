/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 11:35:38 by calide-n          #+#    #+#             */
/*   Updated: 2021/06/26 11:49:26 by calide-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <stdlib.h>

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombie_horde = new Zombie[4];
    std::string names[] = {"Xin Zhao", "Master Yi", "Ekko", "Kha Zix", "Nocturne", "Graves"};

    zombie_horde[0].setName(name);
    for (int i = 1; i < N; i++)
        zombie_horde[i].setName(names[rand() % 6]);
    return (zombie_horde);
}