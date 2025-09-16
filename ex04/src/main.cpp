/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:04:30 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/16 13:09:56 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

bool	writeInfileAndReplace(std::ifstream &infile, const std::string &s1, const std::string &s2);

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error: too much or not enough arguments\n";
		return (1);
	}
	const std::string s1 = argv[2];
	if (s1.empty()) 
	{
		std::cout << "Error: search string is empty\n";
		return (1);
	}
	std::ifstream infile(argv[1]);
	if (infile.fail() == true)
	{
		std::cout << "Error: cannot open input file\n";
		return (1);
	}
	const std::string	s2 = argv[3];
	if (writeInfileAndReplace(infile, s1, s2) == false)
		return (1);
	return (0);
}

bool	writeInfileAndReplace(std::ifstream &infile, const std::string &s1, const std::string &s2)
{
	std::string		result;
	std::string		line;
	std::size_t		pos;
	std::ofstream outfile("newfile");

	if (outfile.fail() == true)
	{
		std::cout << "Error: cannot create output file\n";
		return (false);
	}
	while (getline (infile, line))
	{
		result.clear();
		while (!line.empty())
		{
			pos = line.find(s1);
			if (pos == std::string::npos)
			{
				result += line;
				break ;
			}
			else
			{
				result += line.substr(0, pos);
				result += s2;
			}
			line.erase(0, pos + s1.length());
		}
		outfile << result << '\n';
	}
	return (true);
}
