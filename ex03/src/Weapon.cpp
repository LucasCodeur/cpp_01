/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:08:32 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/10 15:36:31 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#include <string>

Weapon::Weapon( std::string name )
{
	this->type = name;
}

const std::string&	Weapon::getType( void )const
{
	return (this->type);
}

void	Weapon::setType( std::string type )
{
	this->type = type;
}
