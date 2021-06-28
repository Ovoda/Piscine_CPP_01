/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 15:19:19 by calide-n          #+#    #+#             */
/*   Updated: 2021/06/26 21:54:17 by calide-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int ft_error(std::string const error)
{
	std::cout << error << std::endl;
	return (-1);
}

//WARNING : the replace function only works if new_word != old_word

std::string	replace(std::string line, std::string const old_word, std::string const new_word)
{
	std::size_t ret;

	while ((ret = line.find(old_word)) != std::string::npos)
		line = line.substr(0, ret) + new_word + line.substr(ret + old_word.length());
	return (line);
}

int main(int argc, char *argv[])
{
	if (argc != 4)
		return (ft_error("Error: wrong number of arguments"));

	std::string new_filename;
	std::ifstream ifile;
	
	ifile.open(argv[1], std::ifstream::in);
	if (!ifile.is_open())
		return (ft_error("Error: cannot open file"));

	new_filename = argv[1];
	new_filename += ".replace";

	std::ofstream ofile(new_filename.c_str());

	std::string line;
	std::string const old_word = argv[2];
	std::string const new_word = argv[3];

	while (std::getline(ifile, line))
	{
		if (old_word.compare(new_word) != 0)
			line = replace(line, old_word, new_word);
		ofile << line << std::endl;
	}
	ifile.close();
	ofile.close();
	return (0);
}