/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:55:51 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/10 15:27:32 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

#include <string>
#include <iostream>

HumanB::HumanB( std::string name )
{
	this->_name = name;
	this->weapon = NULL;
}

void	HumanB::setWeapon( Weapon weapon )
{
	this->_weapon = weapon;
}

void	HumanB::setName( std::string name )
{
	this->_name = name;
}

std::string	HumanB::getName( void )
{
	return(this->_name);
}

void	HumanB::attack( void )
{
	std::cout << this->getName() << " attacks with their " << this->weapon.getType() << "\n";
}
