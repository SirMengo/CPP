/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:18:08 by msimoes           #+#    #+#             */
/*   Updated: 2026/06/24 13:15:14 by msimoes          ###   ########.fr       */
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

std::string PhoneBook::GetNonEmptyInput(std::string prompt)
{
	std::string input;

	input = GetInput(prompt);
	while(input.empty())
	{
		std::cout << "This field cannot be empty, please try again.\n";
		input = GetInput(prompt);
	}
	return input;
}

void PhoneBook::Add()
{	
	contacts[num_count % MAX_CONTACTS].SetFirstName(GetNonEmptyInput("First Name: "));
	contacts[num_count % MAX_CONTACTS].SetLastName(GetNonEmptyInput("Last Name: "));
	contacts[num_count % MAX_CONTACTS].SetNickName(GetNonEmptyInput("Nickname: "));
	contacts[num_count % MAX_CONTACTS].SetPhoneNumber(GetNonEmptyInput("Phone number: "));
	contacts[num_count % MAX_CONTACTS].SetSecret(GetNonEmptyInput("Darkest Secret: "));
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
	std::cout << "| Index    | Name     | Surname  | Nickname |\n";
	for(int i = 0; i < MAX_CONTACTS && contacts[i].GetStatus(); i++)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << FormatColumn(contacts[i].GetFirstName());
		std::cout << "|" << std::setw(10) << FormatColumn(contacts[i].GetLastName());
		std::cout << "|" << std::setw(10) << FormatColumn(contacts[i].GetNickName()) << "|" << std::endl;
	}
	while(1)
	{
		std::string str;
		int index = 0;
		str = GetInput("Input search number: ");
		index = atoi(str.c_str()) - 1;
		if(index < 0 || index > MAX_CONTACTS - 1)
		{
			std::cout << "Number outside of index.\n";
			continue ;
		}
		if(index > num_count - 1)
		{
			if(num_count >= MAX_CONTACTS - 1)
				continue;
			else
				std::cout << "Contact not yet created." << std::endl; 
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
