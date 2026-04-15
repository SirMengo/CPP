/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:18:08 by msimoes           #+#    #+#             */
/*   Updated: 2026/04/15 22:42:56 by msimoes          ###   ########.fr       */
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
	std::cout << "\n";
	return input;
}

void PhoneBook::Add()
{
	Contact current;
	
	current.SetFirstName(GetInput("First Name: "));
	current.SetLastName(GetInput("Last Name: "));
	current.SetNickName(GetInput("Nickname: "));
	current.SetPhoneNumber(GetInput("Phone: "));
	current.SetSecret(GetInput("Darkest Secret: "));
}