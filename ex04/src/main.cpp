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

#include <cstdio>
#include <fstream>
#include <iostream>

bool	writeInfileAndReplace(std::ifstream& infile, std::ofstream& outfile, const std::string& s1, const std::string& s2);

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
	std::string temp = argv[1];
	temp += ".replace";
	std::ifstream infile(argv[1], std::ios::binary);
	if (infile.fail() == true)
	{
		std::cout << "Error: cannot open input file\n";
		return (1);
	}
	std::ofstream outfile(temp.c_str());
	if (outfile.fail() == true)
	{
		std::cout << "Error: cannot create output file\n";
		return (false);
	}
	const std::string	s2 = argv[3];
	if (writeInfileAndReplace(infile, outfile, s1, s2) == false)
		return (1);
	return (0);
}

bool	writeInfileAndReplace(std::ifstream& infile, std::ofstream& outfile, const std::string& s1, const std::string& s2)
{
	std::string		result;
	std::string		line;
	const size_t	size_bloc = 4096;
	char			bloc[size_bloc];
	std::size_t		pos;


	while (infile.read(bloc, size_bloc) || infile.gcount() > 0)
	{
		line.append(bloc, infile.gcount());
	}
	while (line.empty() == false)
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
	outfile << result;
	return (true);
}
