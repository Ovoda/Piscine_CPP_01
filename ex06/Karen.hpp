/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:11:11 by calide-n          #+#    #+#             */
/*   Updated: 2021/06/26 18:40:25 by calide-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP
#include <string>

class Karen
{
private:
    void    _debug( void ) const;
    void    _info( void ) const;
    void    _warning( void ) const;
    void    _error( void ) const;
public:
    Karen(void);
    ~Karen();
    void    complain( std::string level );
};

#endif