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
	std::ifstream infile(argv[1]);
	std::ofstream outfile("text.txt");
	std::string		temp;
	std::string		result;
	std::string		s1;
	std::string		s2;
	int				pos;

	(void)argc;
	if (argc != 3)
		return (1);
	s1 = argv[2];
	s2 = argv[3];
	int	i = 0;
	while (getline (infile, temp))
	{
		while (temp[i] != '\0')
		{
			pos = temp.find(s1);
			result += temp.substr(0, pos);
			result += s2;
			i = pos + s1.length();
			temp.erase(0, i);
		}
		result += '\n';
	}
	std::cout << result << "\n";
	infile.close();
	return (0);
}
