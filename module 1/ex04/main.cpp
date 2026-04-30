/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:46:13 by msimoes           #+#    #+#             */
/*   Updated: 2026/04/30 13:35:57 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string ReplaceString(std::string str, std::string s1, std::string s2)
{
	for(int i = 0; str[i]; i++)
	{
		int j = 0;
		if(str[i] == s1[0])
			while(str[i + j] == s1[j])
				j++;
		if(s1[j] == '\0')
		{
			while()
		}
	}
}

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
	
	//filename.append(".replace");
	s1 = av[2];
	s2 = av[3];
	
}