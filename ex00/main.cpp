/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 11:01:56 by calide-n          #+#    #+#             */
/*   Updated: 2021/06/26 11:15:39 by calide-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    std::cout << std::endl << "______________ Using randomChump ______________" << std::endl;
    randomChump("bob");
    std::cout << std::endl;
    randomChump("jim");
    std::cout << std::endl;
    randomChump("carl");
    std::cout << std::endl;
    randomChump("foo");
    std::cout << std::endl;

    std::cout << std::endl << "______________ Using NewZombie ______________" << std::endl;
    Zombie  *zombie[4];

    zombie[0] = newZombie("bob");
    zombie[0]->announce();
    delete zombie[0];
    std::cout << std::endl;
    zombie[1] = newZombie("jim");
    zombie[1]->announce();
    delete zombie[1];
    std::cout << std::endl;
    zombie[2] = newZombie("carl");
    zombie[2]->announce();
    delete zombie[2];
    std::cout << std::endl;
    zombie[3] = newZombie("foo");
    zombie[3]->announce();
    delete zombie[3];
    std::cout << std::endl;

    return (0);
}