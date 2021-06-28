/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 15:19:19 by calide-n          #+#    #+#             */
/*   Updated: 2021/06/26 19:16:02 by calide-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "You need one parameter GOD DAMN IT!" << std::endl;
		return (-1);
	}
	Karen		karen;
	std::string level = argv[1];
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};


	int i = 0;
	for (i = 0; i < 4; i++)
		if (levels[i] == level)
			break;

	switch (i) {
		case 0:
			karen.complain("DEBUG");
		case 1:
			karen.complain("INFO");
		case 2:
			karen.complain("WARNING");
		case 3:
			karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}


	return (0);
}