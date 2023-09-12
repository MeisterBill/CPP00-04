/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:57:18 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/12 16:02:30 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **argv)
{
	if (ac not_eq 4)
	{
		std::cout << "Program must have 3 arguments." << std::endl;
		return (1);
	}
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);
	std::string		file(argv[1]);
	std::ifstream	infile(file.c_str());
	file += ".replace";
	std::ofstream	outfile(file.c_str());
	if (infile.fail() || outfile.fail())
	{
		std::cout << "File error." << std::endl;
		return (1);
	}
	return (0);
}