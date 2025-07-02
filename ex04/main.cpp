/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 12:55:49 by carlos            #+#    #+#             */
/*   Updated: 2025/07/01 12:14:46 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char const *argv[])
{
	if (argc !=4)
		return (1);
	std::ifstream filename;
	std::ofstream outfile;
	std::string str;
	int pos;
	char chr;
	filename.open(argv[1]);
	if (filename.fail())
	{
		std::cout << "Error: " << argv[1] << " no such file" << std::endl;
		return (1);
	}
	while (!filename.eof() && filename >> std::noskipws >> chr)
	{
		str += chr;
	}
	filename.close();

	outfile.open((std::string(argv[1]) + ".replace").c_str());
	if (outfile.fail())
		return (1);
	for (int i = 0; i < (int)str.size(); i++)
	{
		pos = str.find(argv[2], i);
		if (pos == i)
		{
			outfile << argv[3];
			i += std::string(argv[2]).size() - 1;	
		}
		else
			outfile << str[i];
	}
	outfile.close();
	return (0);
}

