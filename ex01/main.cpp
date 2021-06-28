/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 11:01:56 by calide-n          #+#    #+#             */
/*   Updated: 2021/06/26 11:52:37 by calide-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie_horde;
    int     nb_zombie = 4;
    
    zombie_horde = zombieHorde(nb_zombie, "Warwick");
    for (int i = 0; i < nb_zombie ; i++)
        zombie_horde[i].announce();
    
    delete [] zombie_horde;
    return (0);
}