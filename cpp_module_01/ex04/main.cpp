/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:34:32 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/06 11:04:35 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;

void replace_and_write(std::string line, std::ofstream &outfile,
		std::string to_find, std::string to_replace)
{
	static int first_line = 1;
	size_t pos;

	if (!first_line)
		outfile << endl;
	while ((pos = line.find(to_find, 0)) != std::string::npos)
	{
		outfile << line.substr(0, pos);
		outfile << to_replace;
		line = line.substr(pos + to_find.length());
	}
	outfile << line;
	first_line = 0;
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		cout << "Usage: replace filename str1 str2" << endl;
		return 1;
	}

	std::ifstream infile(av[1]);
	if (!infile.is_open())
	{
		cout << "cannot open: " << av[1] << endl;
		return 1;
	}

	std::string outfilename = std::string(av[1]).append(".replace");
	std::ofstream outfile(outfilename.c_str());
	if (!outfile.is_open())
	{
		cout << "cannot create/write to: " << outfilename << endl;
		return 1;
	}

	std::string line;
	do
	{
		getline(infile, line);
		replace_and_write(line, outfile, av[2], av[3]);
	} while (!infile.eof());

	return 0;
}
