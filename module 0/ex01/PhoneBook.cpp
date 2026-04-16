/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:18:08 by msimoes           #+#    #+#             */
/*   Updated: 2026/04/16 03:40:55 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::InitEnvars()
{
	num_count = 0;
	for(int i = 0; i < MAX_CONTACTS ; i++)
		contacts[i].DeactivateContact();
}

std::string PhoneBook::GetInput(std::string str)
{
	std::string input;

	std::cout << str;
	if(!std::getline(std::cin, input))
	if(std::cin.eof())
		exit(0);
	return input;
}

void PhoneBook::Add()
{	
	contacts[num_count % MAX_CONTACTS].SetFirstName(GetInput("First Name: "));
	contacts[num_count % MAX_CONTACTS].SetLastName(GetInput("Last Name: "));
	contacts[num_count % MAX_CONTACTS].SetNickName(GetInput("Nickname: "));
	contacts[num_count % MAX_CONTACTS].SetPhoneNumber(GetInput("Phone number: "));
	contacts[num_count % MAX_CONTACTS].SetSecret(GetInput("Darkest Secret: "));
	contacts[num_count % MAX_CONTACTS].ActivateContact();
	num_count++;
}

std::string FormatColumn(std::string str)
{
	if(str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}


void PhoneBook::Search()
{
	std::cout << "| id       | Name     | Surname  | Nickname | Number   |\n";
	for(int i = 0; contacts[i].GetStatus(); i++)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << FormatColumn(contacts[i].GetFirstName());
		std::cout << "|" << std::setw(10) << FormatColumn(contacts[i].GetLastName());
		std::cout << "|" << std::setw(10) << FormatColumn(contacts[i].GetNickName());
		std::cout << "|" << std::setw(10) << FormatColumn(contacts[i].GetPhoneNumber()) << "|" << "\n";
	}
	while(1)
	{
		std::string str;
		int index = 0;
		std::cout << "Input search number: ";
		std::getline(std::cin, str);
		index = atoi(str.c_str()) - 1;
		if(index < 0 || index > MAX_CONTACTS - 1)
		{
			std::cout << "Number outside of index.\n";
			continue ;
		}
		if(contacts[index].GetStatus())
		{
			std::cout << "First name: "<< contacts[index].GetFirstName() << "\n";
			std::cout << "Last name: "<< contacts[index].GetLastName() << "\n";
			std::cout << "Nickname: "<<contacts[index].GetNickName() << "\n";
			std::cout << "Phone number:" << contacts[index].GetPhoneNumber() << "\n";
			std::cout << "Darkest secret: " <<contacts[index].GetSecret() << "\n";
			break;
		}
		else
			break ;
	}
}
