/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 11:48:58 by meandrad          #+#    #+#             */
/*   Updated: 2026/03/11 13:40:52 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main (int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: not enough arguments" << std::endl;
		std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::ifstream file(argv[1]);
	if (!file.is_open())
	{
		std::cerr << "Error opening the file" << std::endl;
		return (1);
	}

	std::ofstream outfile(std::string(argv[1]) + ".replace");
	if (!outfile.is_open())
	{
		std::cerr << "Error creating output file" << std::endl;
		return (1);
	}
	
	std::string line;
	size_t pos;
	while (getline(file, line))
	{
		std::string result = "";
		while ((pos = line.find(argv[2])) != std::string::npos)
		{
			result += line.substr(0, pos);
			result += argv[3];
			line = line.substr(pos + std::string(argv[2]).length());
	}

	if (result.empty())
	outfile << line << '\n';
	else
	outfile << result << '\n';
	}

	file.close();
	outfile.close();
	return (0);
}