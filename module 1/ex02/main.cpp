/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:07:31 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/02 02:30:10 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string string  = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	
	std::cout << "Variable \"Brain\" address:" << &string << std::endl;
	std::cout << "Pointer address:" << stringPTR << std::endl;
	std::cout << "Reference address:" << &stringREF << std::endl; //std endl please we're not in C anymore, this is C++;
	std::cout << std::endl;
	std::cout << "Variable \"Brain\" value:" << string << std::endl;
	std::cout << "Pointer value:" << *stringPTR << std::endl;
	std::cout << "Reference value:" << stringREF << std::endl;
}
