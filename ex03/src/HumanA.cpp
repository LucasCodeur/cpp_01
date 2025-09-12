/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:23:10 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/10 15:47:52 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

#include <string>
#include <iostream>

HumanA::HumanA( std::string name, Weapon& weapon ) : name(name), weapon(weapon) {}

void	HumanA::setWeapon( Weapon &weapon )
{
	this->weapon = weapon;
}

void	HumanA::setName( std::string name )
{
	this->name = name;
}

std::string	HumanA::getName( void )
{
	return(this->name);
}

void	HumanA::attack( void )
{
	std::cout << this->getName() << " attacks with their " << this->weapon.getType() << "\n";
}
