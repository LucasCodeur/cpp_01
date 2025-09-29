/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:29:33 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/09 13:26:40 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*nightmareLuffy;
	Zombie	foo;
	
	nightmareLuffy = newZombie("Nightmare Luffy");
	foo.setName("foo");
	randomChump("Oz");
	nightmareLuffy->announce();
	foo.announce();
	delete nightmareLuffy;
	return (0);
}
