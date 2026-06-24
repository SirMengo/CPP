/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:13:42 by msimoes           #+#    #+#             */
/*   Updated: 2026/06/24 13:15:50 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <cstring>
# include <cstdlib>
# include <iomanip>
# include "Contact.hpp"

# ifndef MAX_CONTACTS
#  define MAX_CONTACTS 8
# endif

class PhoneBook
{
	public:
		std::string GetInput(std::string str);
		std::string GetNonEmptyInput(std::string prompt);
		void Add();
		void Search();
		void InitEnvars();
	private:
		Contact contacts[MAX_CONTACTS];
		int num_count;
};

#endif