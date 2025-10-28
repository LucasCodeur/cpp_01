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
#include <new>
#include <iostream>

int	main(void)
{
	Zombie	*nightmareLuffy;
	int		n;
	
	n = 100000000;
	try 
	{
		nightmareLuffy = zombieHorde(n, "NightmareLuffy");
	}
	catch (const std::bad_alloc& e)
	{
		std::cout << "bad_alloc caught: " << e.what();
		return (1);
	}
	for (size_t i = 0; i < (size_t)n; i++)
		nightmareLuffy[i].announce();
	delete[] nightmareLuffy;
	return (0);
}
