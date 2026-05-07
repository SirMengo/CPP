/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes@student.42lisboa.com <msimoes>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:46:13 by msimoes           #+#    #+#             */
/*   Updated: 2026/05/07 11:56:47 by msimoes@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string *ReplaceString(std::string str, std::string s1, std::string s2)
{
	std::string *ret = new std::string();
	unsigned long last_position = 0;
	unsigned long position = 0;

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
	return ret;
}

int main(int ac, char **av)
{
	std::string filename;
	std::string s1;
	std::string s2;

	if(ac != 4)
		return 1;
	
	filename = av[1];

	std::ifstream file(filename.c_str());
	if(!file)
	{
		std::cout << "No/Invalid file" << std::endl;
		return 1;
	}

	std::stringstream buffer;
	buffer << file.rdbuf();
	std::string content = buffer.str();
	file.close();
	
	filename.append(".replace");
	s1 = av[2];
	s2 = av[3];

	std::string *replaced = ReplaceString(content, s1, s2);
	
	std::ofstream outfile(filename.c_str());
	if(!outfile)
	{
		std::cerr << "Outfile error";
		delete replaced;
		return 1;
	}
	outfile << *replaced << std::endl;
	delete replaced;
	return 0;
}
