/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:06:32 by msimoes           #+#    #+#             */
/*   Updated: 2026/04/16 00:23:36 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook book;
	
	book.InitNumCount();
	std::cout << "Welcome to your phonebook\nCOMMANDS:\n";
	std::cout << "	ADD\n	SEARCH\n	EXIT\n\n";
	
	while(1)
	{
		std::string command;
		
		std::cout << "Input command: ";
		std::getline(std::cin, command);
		for(int i = 0; command[i]; i++)
			command[i] = toupper(command[i]);
		if(!strcmp(command.c_str(), "ADD"))
			book.Add();	
		else if(!strcmp(command.c_str(), "SEARCH"))
			book.Search();
		else if(!strcmp(command.c_str(), "EXIT"))
			break ;
	}
}