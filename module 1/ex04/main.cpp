/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:46:13 by msimoes           #+#    #+#             */
/*   Updated: 2026/04/29 15:58:23 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int ac, char **av)
{
	std::string filename;
	std::string s1;
	std::string s2;

	if(ac != 4)
		exit ;
	
	filename = av[1];

	std::ifstream file(filename);
	if(!file)
	{
		std::cout << "No/Invalid file" << std::endl;
		exit ;
	}

	std::stringstream buffer;
	buffer << file.rdbuf();
	std::string content = buffer.str();
	file.close();
	
	//filename += ".replace";
	s1 = av[2];
	s2 = av[3];
	
}