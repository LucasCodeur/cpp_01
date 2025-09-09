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
	int		n;
	
	n = 4;
	nightmareLuffy = zombieHorde(n, "NightmareLuffy");
	for (size_t i = 0; i < (size_t)n; i++)
		nightmareLuffy[i].announce();
	delete[] nightmareLuffy;
	return (0);
}
