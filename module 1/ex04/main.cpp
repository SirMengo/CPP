/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mago <mago@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:46:13 by msimoes           #+#    #+#             */
/*   Updated: 2026/05/05 14:21:24 by mago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string ReplaceString(std::string str, std::string s1, std::string s2)
{
	std::string *ret = new std::string();
	int last_position = 0;
	int position = 0;

	while(last_position < str.length())
	{
		position = str.find(s1, last_position);
		if (position == std::string::npos)
			break;
		ret->append(str.substr(last_position, position - last_position));
		ret->append(s2);
		last_position = position + s1.length();
	}
	ret->append(str.substr(last_position, position - last_position));
	return *ret;
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
	
	filename.append(".replace");
	s1 = av[2];
	s2 = av[3];
}