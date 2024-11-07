/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:43:56 by eahn              #+#    #+#             */
/*   Updated: 2024/11/07 15:40:52 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>  // std::ifstream
#include <iostream> // std::cout
#include <string>   // std::string


void replacer (std::ifstream& inputFile, std::ofstream& outputFile, const std::string& s1, const std::string& s2)
{

}


int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (s1.empty())
	{
		std::cerr << "Error: s1 is empty" << std::endl;
		return (1);
	}

	std::ifstream inputFile(filename);
	if (!inputFile.is_open())
	{
		std::cerr << "Error: could not open input file" << std::endl;
		return (1);
	}

	std::ofstream outputFile(filename + ".replace");
	if (!outputFile.is_open())
	{
		std::cerr << "Error: could not open output file" << std::endl;
		inputFile.close();
		return (1);
	}

	replacer(inputFile, outputFile, s1, s2);

	inputFile.close();
	outputFile.close();
	return (0);
}
