/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 13:58:28 by calide-n          #+#    #+#             */
/*   Updated: 2021/06/26 14:21:00 by calide-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H
#include <string>

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon();
		// Getters and setters
		std::string	getType() const;
		void		setType(const std::string);
};

#endif