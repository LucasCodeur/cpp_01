/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:33:43 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/16 15:48:04 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

static int	levelToInt(const std::string& level);

void Harl::complains( std::string level )
{
	switch (levelToInt(level))
	{
		case(0):
			this->complain("DEBUG");
			std::cout << '\n';
		case(1):
			this->complain("INFO");
			std::cout << '\n';
		case(2):
			this->complain("WARNING");
			std::cout << '\n';
		case(3):
			this->complain("ERROR");
			break ;
		default:
			this->complain("NO COMPLAIN");
	}
}

void Harl::complain( std::string level )
{
	void (Harl::*complainsFunctions[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	
	for (size_t i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*complainsFunctions[i])();
			return ;
		}
	}
	std::cout <<  "[ Probably complaining about insignificant problems ]\n";
}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.\nI really do!\n";
}

void Harl::info( void )
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]\n" << "This is unacceptable!\nI want to speak to the manager now.\n";
}

static int	levelToInt(const std::string& level)
{
	if (level == "DEBUG")
		return (0);
	if (level == "INFO")
		return (1);
	if (level == "WARNING")
		return (2);
	if (level == "ERROR")
		return (3);
	return (-1);
}
