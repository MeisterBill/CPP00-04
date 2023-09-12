/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:57:18 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/12 18:33:19 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	ft_replace(std::ifstream &infile, std::ofstream &outfile, char **argv)
{
	std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::string str;
    size_t      index;
    while (1)
    {
        getline(infile, str);
        index = str.find(s1);
        while (s1 != s2 and index != std::string::npos)
        {
            str = str.erase(index, s1.size());
            str = str.insert(index, s2);
            index = str.find(s1, index + s2.size());
        }
        outfile << str;
        if (infile.eof())
            break ;
        outfile << std::endl;
    }
}

int main(int ac, char **argv)
{
	if (ac not_eq 4)
	{
		std::cout << "Program must have 3 arguments." << std::endl;
		return (1);
	}
	std::string		file(argv[1]);
	std::ifstream	infile(file.c_str());
	file += ".replace";
	std::ofstream	outfile(file.c_str());
	if (infile.fail() || outfile.fail())
	{
		std::cout << "File error." << std::endl;
		return (1);
	}
	ft_replace(infile, outfile, argv);
	return (0);
}