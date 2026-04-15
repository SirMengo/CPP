/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:18:08 by msimoes           #+#    #+#             */
/*   Updated: 2026/04/16 00:33:59 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
	contacts[num_count % 8].SetFirstName(GetInput("First Name: "));
	contacts[num_count % 8].SetLastName(GetInput("Last Name: "));
	contacts[num_count % 8].SetNickName(GetInput("Nickname: "));
	contacts[num_count % 8].SetPhoneNumber(GetInput("Phone number: "));
	contacts[num_count % 8].SetSecret(GetInput("Darkest Secret: "));
	num_count++;
}

void PhoneBook::InitNumCount()
{
	num_count = 0;
}

void PhoneBook::Search()
{
	std::cout << "| First Name | Last Name | Nickname | Phone number | Darkest Secret |\n";
	for(int i = 0; i < 8; i++)
	{
		std::cout << contacts[i].GetFirstName() << " ";
		std::cout << contacts[i].GetLastName() << " ";
		std::cout << contacts[i].GetNickName() << " ";
		std::cout << contacts[i].GetPhoneNumber() << " ";
		std::cout << contacts[i].GetSecret() << "\n";
	}
	
}