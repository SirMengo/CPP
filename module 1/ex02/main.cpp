/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:07:31 by msimoes           #+#    #+#             */
/*   Updated: 2026/04/28 12:27:05 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string string  = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "Variable \"Brain\" address:" << &string << "\n";
	std::cout << "Pointer address:" << stringPTR << "\n";
	std::cout << "Reference address:" << &stringREF << "\n\n";
	
	std::cout << "Variable \"Brain\" value:" << string << "\n";
	std::cout << "Pointer value:" << stringPTR << "\n";
	std::cout << "Reference value:" << stringREF << "\n";
}