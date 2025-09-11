/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:04:30 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/11 18:22:22 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main(int argc, char *argv[])
{
	std::ifstream infile(argv[1], std::ios::in);
	std::ofstream outfile(argv[1], std::ios::out);

	if (argc != 3)
		return (1);
	if (init_file.is_open()) 
	{
		std::cout << "outfile opened successfully.\n";

		// Append content to the outfile
		outfile << "This text is appended to the file.\n";

		// Close the outfile
		outfile.close();

		std::cout << "outfile closed.\n";
	}
	return (0);
}
