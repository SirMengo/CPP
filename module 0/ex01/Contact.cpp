/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:12:23 by msimoes           #+#    #+#             */
/*   Updated: 2026/04/20 10:16:05 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::SetFirstName(std::string str) { first_name = str; }
void Contact::SetLastName(std::string str) { last_name = str; }
void Contact::SetNickName(std::string str) { nickname = str; }
void Contact::SetPhoneNumber(std::string str) { phone_number = str; }
void Contact::SetSecret(std::string str) { secret = str; }
void Contact::DeactivateContact() { active = false; }
void Contact::ActivateContact() { active = true; }
		
std::string Contact::GetFirstName() { return first_name; }
std::string Contact::GetLastName() { return last_name; }
std::string Contact::GetNickName() { return nickname; }
std::string Contact::GetPhoneNumber() { return phone_number; }
std::string Contact::GetSecret() { return secret; }
bool Contact::GetStatus() { return active; }
