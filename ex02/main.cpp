/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 11:01:56 by calide-n          #+#    #+#             */
/*   Updated: 2021/06/26 12:07:45 by calide-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout
        << "string address :\t\t\t["
        << &str
        << "]"
    << std::endl;

    std::cout
        << "string address using pointer :\t\t["
        << stringPTR
        << "]"
    << std::endl;

    std::cout
        << "string address using reference :\t["
        << &stringREF
        << "]"
    << std::endl << std::endl;

    std::cout
        << "string using pointer :\t\t\t["
        << *stringPTR
        << "]"
    << std::endl;

    std::cout
        << "string using reference :\t\t["
        << stringREF
        << "]"
    << std::endl;

    return (0);
}