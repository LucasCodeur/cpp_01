/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:27:06 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/09 11:45:41 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie( void ) 
{
	std::cout << this->getName() << ": is dead\n"; 
}

void	Zombie::announce( void )
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ...\n";
}

std::string	Zombie::getName( void )
{
	return (this->name);
}

void	Zombie::setName( std::string name )
{
	this->name = name;
}
