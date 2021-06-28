/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:17:28 by calide-n          #+#    #+#             */
/*   Updated: 2021/06/26 18:53:36 by calide-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen(void) {}

Karen::~Karen() {}

void	Karen::complain(std::string level) {
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	typedef void (Karen::* Func)( void ) const;
	
	Func func[4]= {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
	int i = 0;

	for (i = 0; (i < 4); i++)
		if (levels[i] == level)
		{
			(this->*(func[i]))();
			return ;
		}
	std::cout << "this level doesn't exist" << std::endl;
}

void	Karen::_debug( void ) const {
	std::cout
	<< "[INFO] I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
	<< std::endl;
}

void	Karen::_info( void ) const {
	std::cout
	<< "[DEBUG] I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
	<< std::endl;
}

void	Karen::_warning( void ) const {
	std::cout
	<< "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
	<< std::endl;
}

void	Karen::_error( void ) const {
	std::cout
	<< "[ERROR] This is unacceptable, I want to speak to the manager now."
	<< std::endl;
}