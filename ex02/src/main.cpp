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

#include <iostream> 

#include "Zombie.hpp"

int	main(void)
{
	std::string		hiThisIsBrain;
	std::string		*stringPTR;
	std::string&	stringREF = hiThisIsBrain;

	hiThisIsBrain = "HI THIS IS BRAIN";
	stringPTR = &hiThisIsBrain;

	std::cout << "hiThisIsBrain: " << &hiThisIsBrain << "\n";
	std::cout << "stringPTR: " << stringPTR << "\n";
	std::cout << "stringREF: " << &stringREF << "\n";

	std::cout << "The value of the string variable: " << hiThisIsBrain << "\n";
	std::cout << "The value of the string variable: " << *stringPTR << "\n";
	std::cout << "The value of the string variable: " << stringREF << "\n";

	return (0);
}
