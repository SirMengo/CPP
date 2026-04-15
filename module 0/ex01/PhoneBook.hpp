/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:13:42 by msimoes           #+#    #+#             */
/*   Updated: 2026/04/16 00:22:43 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <cstring>
# include <cstdlib>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string secret;
	public:
		void SetFirstName(std::string str) { first_name = str; }
		void SetLastName(std::string str) { last_name = str; }
		void SetNickName(std::string str) { nickname = str; }
		void SetPhoneNumber(std::string str) { phone_number = str; }
		void SetSecret(std::string str) { secret = str; }
		
		std::string GetFirstName() { return first_name; }
		std::string GetLastName() { return last_name; }
		std::string GetNickName() { return nickname; }
		std::string GetPhoneNumber() { return phone_number; }
		std::string GetSecret() { return secret; }
};

class PhoneBook
{
	public:
		std::string GetInput(std::string str);
		void Add();
		void Search();
		void InitNumCount();
	private:
		Contact contacts[8];
		int num_count;
};

#endif
